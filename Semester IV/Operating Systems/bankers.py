# Bankers Algorithm
# If requested < available, free allocated

# Here we will have 3 resource classes


def isLessThan(tup1, tup2):
	return (
		tup1[0] <= tup2[0] and
		tup1[1] <= tup2[1] and 
		tup1[2] <= tup2[2]
	)


n = int(input("Enter the number of processes: "))

print("Enter the available resources: ")
A = int(input("A: "))
B = int(input("B: "))
C = int(input("C: "))

available = [A,B,C]

allocated = []
max_needed = []
executed = []

for i in range(n):
	print("\nProcess " + str(i))
	print("Allocated")
	A = int(input("A: "))
	B = int(input("B: "))
	C = int(input("C: "))
	allocated.append([A,B,C])
	print("Max Needed")
	A = int(input("A: "))
	B = int(input("B: "))
	C = int(input("C: "))
	max_needed.append([A,B,C])
	executed.append(False)

requested = []

for i in range(n):
	requested.append([
		max_needed[i][0] - allocated[i][0],
		max_needed[i][1] - allocated[i][1],
		max_needed[i][2] - allocated[i][2],
	])

count = 0

while (count != n):
	for i in range(n):
		if isLessThan(requested[i], available) and not executed[i]:
			available[0] += allocated[i][0]
			available[1] += allocated[i][1]
			available[2] += allocated[i][2]
			executed[i] = True
			count += 1
			print("P" + str(i), end = " ")
