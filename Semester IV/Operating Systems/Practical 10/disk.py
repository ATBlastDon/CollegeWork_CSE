def getInput():
	global n, queue, start

	n = int(input("Enter the number of requests: "))

	queue = []

	print("Enter the requests in the queue")
	for i in range(n):
		queue.append(int(input()))

	start = int(input("Enter the head start: "))


def scan():
	
	getInput()

	queue.sort()

	direction = -1;
	start_index = 0

	while queue[start_index] < start:
		start_index += 1
	start_index -= 1 

	index = start_index

	while index < len(queue):
		print(queue[index], end=" ")
		index += direction

		if index == -1:
			index = start_index + 1
			direction = 1



def cscan():
	
	getInput()

	queue.sort()

	start_index = 0
	while queue[start_index] < start:
		start_index += 1

	index = start_index

	while index < len(queue):
		print(queue[index], end=" ")
		index += 1

	index = 0;

	while index < start_index:
		print(queue[index], end=" ")
		index += 1



choice = 0
while(choice < 3):
	print("\n  MENU")
	print("1 SCAN")
	print("2 C SCAN")
	print("3 Exit")

	choice = int(input("Enter choice: "))

	if choice == 1:
		scan()
	elif choice == 2:
		cscan()
	else: pass