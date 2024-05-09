from queue import PriorityQueue

def UCS(graph, start, goal):
    visited = set()
    priorityqueue = PriorityQueue()
    priorityqueue.put((0, start, [start]))

    while not priorityqueue.empty():
        current_cost, current_vertex, path = priorityqueue.get()

        if current_vertex not in visited:
            visited.add(current_vertex)

            if current_vertex == goal:
                print("Shortest path:", path)
                print("Total cost:", current_cost)
                return

            for neighbor, edge_cost in graph[current_vertex]:
                if neighbor not in visited:
                    new_cost = current_cost + edge_cost
                    new_path = path + [neighbor]
                    priorityqueue.put((new_cost, neighbor, new_path))

graph = {
    'A': [['B', 5], ['D', 3]],
    'B': [['C', 1]],
    'C': [['E', 6], ['G', 8]],
    'D': [['E', 2], ['F', 2]],
    'E': [['B', 4]],
    'F': [['G', 3]],
    'G': [['E', 4]]
}

print('path using UCS:')
UCS(graph, 'A', 'G')
print('the time complexity of dijekstra is : "O(b(1+C/ε))" ')