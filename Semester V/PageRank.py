adjMatrix = [
	[0,1,1,0],
	[0,0,0,1],
	[1,1,0,1],
	[0,0,1,0]
]

def pageRank(adjMatrix):

	scores = []

	for _ in range(len(adjMatrix)):
		scores.append(1/len(adjMatrix))

	# Number of iteration = number of pages - 1
	for _ in range(len(adjMatrix) - 1):

		# Column wise traversal
		tempScores = [0] * len(adjMatrix)
		for i in range(len(adjMatrix)):
			for j in range(len(adjMatrix)):

				if adjMatrix[j][i] == 1:
					outgoingLinks = sum(adjMatrix[j]) # Row Sum
					tempScores[i] += scores[j]/outgoingLinks

		scores = tempScores
				
	return scores


print(pageRank(adjMatrix))