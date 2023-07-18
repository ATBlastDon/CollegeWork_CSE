print("Enter the number of values")
n = int(input())

values = []

print("Enter the values")
for i in range(n):
	values.append([int(input()), 0])

c1 = values[0][0]
c2 = values[1][0]


for v in range(len(values)):
	count1 = 0
	total1 = 0
	count2 = 0
	total2 = 0

	for i in range(len(values)):
		if abs(values[i][0] - c1) <= abs(values[i][0] - c2):
			count1 += 1
			total1 += values[i][0]
			values[i][1] = 1
		else :
			count2 += 1
			total2 += values[i][0]
			values[i][1] = 2

	c1 = float(total1/count1)
	c2 = float(total2/count2)


for value in values:
	print(value)
