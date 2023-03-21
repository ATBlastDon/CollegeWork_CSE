def knapsack(weights, profits, n, capacity):
	remaining_wt = capacity
	sln_vector = []

	PtPerWt = []
	for i in range(n):
		PtPerWt.append(profits[i]/weights[i])
		sln_vector.append(0)


	selection_complete = False
	
	# The loop ends if none of the items are remaining to be selected or we have filled the knapsack
	while not selection_complete and remaining_wt != 0:

		selection_complete = True
		largest = 0
		# Set the largest to the first non selected item
		for i in range(n):
			if sln_vector[i] == 0:
				largest = i
				selection_complete = False
				break

		# Find the non selected item with larges p/w
		for i in range(n):
			if sln_vector[i] == 0 and PtPerWt[i] >= PtPerWt[largest]: 
				largest = i

		# Add it to solution vector
		if not selection_complete:

			if weights[largest] > remaining_wt:
				sln_vector[largest] = (remaining_wt/weights[largest])
				remaining_wt = 0
				break
			else:
				sln_vector[largest] = 1
				remaining_wt -= weights[largest]


	# Calculate Max Profit:
	maxProfit = 0
	for i in range(n):
		maxProfit += sln_vector[i] * profits[i]

	print(sln_vector)
	print("Max Profit: " + str(maxProfit))




knapsack(
	
	[7,2,3,5,3,2],
	[18,5,9,10,12,7],
	6,13
)