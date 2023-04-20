def getInput():
	global n, m, bsize, p_allocated, psize, is_allocated

	n = int(input("Enter the number of memory blocks: "))

	bsize = []
	p_allocated = []

	print("Enter the size of each block: ")
	for i in range(n):
		bsize.append(int(input()))
		p_allocated.append(-1)

	m = int(input("Enter the number of processes: "))

	psize = []
	is_allocated = []

	print("Enter the size of each process: ")
	for i in range(m):
		psize.append(int(input()))
		is_allocated.append(False)


def showOutput():

	print("Block\t\tSize\t\tProcess")
	for i in range(n):
		print(str(i) + "\t\t" + str(bsize[i]) + "\t\t" + str(p_allocated[i]))




def firstfit():
	
	getInput()

	# Iterate over each process
	for i in range(m):

		if not is_allocated[i]:

			# Iterate over each block
			for j in range(n):

				if (p_allocated[j] == -1 and bsize[j] >= psize[i]):
					p_allocated[j] = i 
					is_allocated[i] = True
					break

	showOutput()


def bestfit():
	
	getInput()

	# Iterate over each process
	for i in range(m):

		if not is_allocated[i]:

			smallest = 9999
			smallest_index = 0
			# Iterate over each block
			for j in range(n):

				if (p_allocated[j] == -1 and bsize[j] >= psize[i] and bsize[j] < smallest):
					smallest = bsize[j]
					smallest_index = j

			p_allocated[smallest_index] = i 
			is_allocated[i] = True
			
	showOutput()


def worstfit():
	
	getInput()

	# Iterate over each process
	for i in range(m):

		if not is_allocated[i]:

			largest = -1
			largest_index = 0
			# Iterate over each block
			for j in range(n):

				if (p_allocated[j] == -1 and bsize[j] >= psize[i] and bsize[j] > largest):
					largest = bsize[j]
					largest_index = j

			p_allocated[largest_index] = i 
			is_allocated[i] = True
			
	showOutput()


choice = 0
while (choice < 4):
	print("1 First Fit")
	print("2 Best Fit")
	print("3 Worst Fit")
	print("4 Exit")

	choice = int(input("Enter choice: "))

	if choice == 1:
		firstfit()
	elif choice == 2:
		bestfit()
	elif choice == 3:
		worstfit()
	else: pass