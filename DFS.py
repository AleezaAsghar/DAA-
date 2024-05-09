def DFS(graph, root):
    visited = set()
    stack = [root]
    visited.add(root)

    while stack:
        vertex = stack.pop()
        print(str(vertex) + " ", end=" ")

        for neighbour in reversed(graph[vertex]):
            if neighbour not in visited:
                visited.add(neighbour)
                stack.append(neighbour)

graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E', 'F'],
    'C': ['B', 'D'],
    'D': ['F'],
    'E': ['G'],
    'F': ['G'],
    'G': []
}

print('Following is the depth-first traversal:')
DFS(graph, 'A')
print('the time complexity of depth first search is : "O(b^d)" ')
