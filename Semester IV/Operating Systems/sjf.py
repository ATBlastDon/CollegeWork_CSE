# Shortest Job First - Non Preemptive
# Out of all the processes that have arrived
# We schedule the one with shortest burst time next

n = int(input("Enter the number of processes: "))

at = []
bt = []
executed = []

for i in range(n):
	at.append(int(input("Enter arrival time for process " + str(i) + ": ")))
	bt.append(int(input("Enter burst time for process " + str(i) + ": ")))
	executed.append(False)

time = 0
count = 0

while (count != n):

	# Go through all processes
	# Find the smallest processed that has arrived

	smallest = 9999
	smallest_index = 0
	for i in range(n):
		if (at[i] <= time and not executed[i] and bt[i] < smallest):
			smallest = bt[i]
			smallest_index = i

	# Now execute the process

	time += bt[smallest_index]
	executed[smallest_index] = True
	count += 1

	print("P" + str(smallest_index), end=" ")


