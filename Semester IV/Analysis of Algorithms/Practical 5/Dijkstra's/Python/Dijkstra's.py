# Python program for implementation of Dijkstra

INF = 99999

def dijkstra(matrix, source):
	d = []
	prev = []
	visited = []

	for i in range(len(adj_matrix)):
		d.append(INF)
		prev.append(INF)
		visited.append(False)

	d[source-1] = 0

	search_complete = False

	while not search_complete:
		smallest = 0

		search_complete = True
		for j in range(len(d)):
			if not visited[j]:
				smallest = j
				search_complete = False
				break

		for j in range(len(d)):
			if (not visited[j] and (d[j] < d[smallest])):
				smallest = j

		if not search_complete:
			for j in range(len(matrix[smallest])):
				if matrix[smallest][j] != 0 and matrix[smallest][j] != INF:

					if d[smallest] + matrix[smallest][j] < d[j]:
						d[j] = d[smallest] + matrix[smallest][j]
						prev[j] = smallest + 1

			visited[smallest] = True



	print('\nVertex', end = '\t')
	for i in range(len(d)):
		print(str(i+1), end = '\t')

	print('\nCost', end = '\t')
	for i in range(len(d)):
		print(str(d[i]), end = '\t')

	print('\nPrev', end = '\t')
	for i in range(len(d)):
		print(str(prev[i]), end = '\t')




adj_matrix = [
	# 1    2     3    4
   
	[0,    10,   5,   2  ], #1
	[INF,  0,    INF, INF], #2
	[INF,  INF,  0,   6  ], #3
	[INF,  3,    INF, 0  ]  #4
]

dijkstra(adj_matrix, 1)