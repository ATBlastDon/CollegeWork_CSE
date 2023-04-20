def getInput():
	global n, ref
	n = int(input("Enter the number of pages: "))
	ref = input("Enter the reference string: ")

def showOutput(arr):
	for i in range(len(arr)):
		if (arr[i] == -1):
			print("-", end=" ")
		else: print((arr[i]), end=" ")
	print()


def fifo():

	getInput()
	
	mem = [-1]*n
	count = 0

	for i in range(len(ref)):
		if ref[i] not in mem:
			mem[count] = ref[i]
			count += 1
			if count == n:
				count = 0

		showOutput(mem)



def lru():

	getInput()
	
	mem = [-1]*n
	timestamp = [0]*n

	for i in range(len(ref)):

		for j in range(n):
			timestamp[j] += 1
		
		if ref[i] not in mem:
			
			# Find the page with largest timestamp
			largest = -1
			largest_index = 0
			for j in range(n):
				if timestamp[j] >= largest:
					largest = timestamp[j]
					largest_index = j

			# Replace it with itme in ref string
			timestamp[largest_index] = 0
			mem[largest_index] = ref[i]

		else:
			index = mem.index(ref[i])
			timestamp[index] = 0


		showOutput(mem)

choice = 0
while (choice < 3):
	print("1 FIFO")
	print("2 LRU")
	print("3 Exit")

	choice = int(input("Enter choice: "))

	if choice == 1:
		fifo()
	elif choice == 2:
		lru()
	else: pass