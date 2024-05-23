def dijkstra(graph, source):
    # Initialize distances and the unvisited set
    d = {v: float('inf') for v in graph}
    d[source] = 0
    unvisited = set(graph.keys())
    
    while unvisited:
        # Find the vertex with the minimum distance in the unvisited set
        u = min(unvisited, key=lambda vertex: d[vertex])
        
        # Remove u from the unvisited set
        unvisited.remove(u)
        
        # Update the distances to the neighboring vertices
        for v, weight in graph[u]:
            if v in unvisited and d[v] > d[u] + weight:
                d[v] = d[u] + weight
    
    return d

# Example usage:
graph = {
    'A': [('B', 1), ('C', 4)],
    'B': [('A', 1), ('C', 2), ('D', 5)],
    'C': [('A', 4), ('B', 2), ('D', 1)],
    'D': [('B', 5), ('C', 1)]
}

source = 'A'
distances = dijkstra(graph, source)
print("Shortest distances from source {}:".format(source))
for vertex, distance in distances.items():
    print("Distance to {}: {}".format(vertex, distance))
