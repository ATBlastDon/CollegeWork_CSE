INF = 99999

def bellmanford(matrix, source):

	# Initialize values
	d = []
	prev = []

	for i in range(len(matrix)):
		d.append(INF)
		prev.append(INF)

	d[source-1] = 0

	# Instead of making a list of edges, we will directly
	# iterate over all valid edges in order
	for i in range(len(matrix)-1):

		for j in range(len(matrix)):
			for k in range(len(matrix[j])):
				if matrix[j][k] != 0 and matrix[j][k] != INF:

					# Perform relaxation
					if d[j] + matrix[j][k] < d[k]:
						d[k] = d[j] + matrix[j][k]
						prev[k] = j + 1


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

bellmanford(adj_matrix, 1)
