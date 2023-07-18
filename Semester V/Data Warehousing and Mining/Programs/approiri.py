class Itemset:

	def __init__(self, i, c):
		self.items = i
		self.support = c


def main():
	c1 = []
	c2 = []
	c3 = []

	t = []

	t1 = int(input("Enter the number of transactions: "))
	t2 = int(input("Enter the number of itmes: "))

	print("Enter the transactions in matrix form\n")
	for i in range(t1):
		t.append([int(numeric_string) for numeric_string in input().split()])


	# Preparing C1
	# Column wise traversal
	for j in range(t2):
		count = 0
		for i in range(t1):
			if t[i][j] == 1:
				count += 1

		if count>=2:
			c1.append(Itemset([j], count))

	for itemset in c1:
		print("Item", itemset.items, "with frequency count = ", itemset.support)


	# Preparing C2 
	for j in range(t2 - 1):
		for k in range(j+1, t2):
			count = 0
			for i in range(t1):
				if t[i][j] == 1 or t[i][k] == 1:
					count += 1

			if count >= 2:
				c2.append(Itemset([j,k], count))

	for itemset in c2:
		print("Item", itemset.items, "with frequency count = ", itemset.support)



	# Preparing C3
	for m in range(t2-2):
		for k in range(m+1, t2-1):
			for j in range(k+1, t2):
				count = 0
				for i in range(t1):
					if t[i][m] == 1 and t[i][j] == 1 and t[i][k] == 1:
						count += 1
				if count >= 2:
					c3.append(Itemset([m,k,j], count))

	for itemset in c3:
		print("Item", itemset.items, "with frequency count = ", itemset.support)


	# Preparing rules with confidence
	print("Rules with confidence")

	con = len(c3)

	for i in range(con):
		for j in range(3):
			print(c3[j % con].items[0], "-->", c3[(j + 1) % con].items[1], c3[(j + 2) % con].items[2])



if __name__ == '__main__':
	main()
