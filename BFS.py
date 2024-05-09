
import collections

def BFS(graph , root):
	
	visited , queue = set() , collections.deque([root])
	visited.add(root)

	while queue:
		vertex = queue.popleft()
		print(str(vertex)+ " " , end = " ")
		
		for neighbour in graph[vertex]:
			if neighbour not in visited:
				visited.add(neighbour)
				queue.append(neighbour)

graph = {'A': [ 'B','C'] ,
	 'B' : [ 'D' , 'E' , 'F'] ,
	 'C' : ['B' , 'D'] ,
	 'D' :['F'] ,
	 'E' :['G'] ,
	 'F':['G'] ,
	 'G' :[] }
print ( 'following is the breath first traversal:' )
BFS(graph , 'A')
print('the time complexity for breath first search is : " O(b^d+1)" ')