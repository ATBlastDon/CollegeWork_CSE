# Shortest Remaining Job First - Premptive
# Everytime a process arrives, the execution is preempted
# The process with the shortest remaining burst time is executed

# We only execute processes one time unit at a time
# Check for new processses after every time unit (Preemption)

n = int(input("Enter the number of processes: "))

at = []
bt = []
rbt = [] # Stores remaining burst time
executed = []

for i in range(n):
	at.append(int(input("Enter arrival time for process " + str(i) + ": ")))
	bt.append(int(input("Enter burst time for process " + str(i) + ": ")))
	rbt.append(bt[i])
	executed.append(False)

time = 0
count = 0

while (count != n):


	# Find process with smallest remaining burst time
	smallest = 9999
	smallest_index = 0

	for i in range(n):
		if (at[i] <= time and not executed[i] and rbt[i] < smallest):
			smallest = rbt[i]
			smallest_index = i

	# Execute one time unit
	time += 1

	rbt[smallest_index] -= 1
	
	if rbt[smallest_index] == 0:
		executed[smallest_index] = True
		count += 1

	print("P" + str(smallest_index), end = " ")