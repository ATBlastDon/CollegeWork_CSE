def main():

	# Python lists are homogeneous
	d = [''' [attr1, attr2, group] ''']

	# Value of attributes can be 0 or 1
	# Values of group can be a or b

	print("Enter the data: ")

	# Taking space seperated input
	for i in range(5):
		a1, a2, g = input().split(" ")
		d.append([int(a1), int(a2), g])

	# Probabilty of a and b
	count_a = 0
	count_b = 0

	for i in range(5):
		if d[i][2] == 'a': # d[i] group = 'a'
			count_a += 1
		else: count_b += 1

	p_a = count_a / 5
	p_b = count_b / 5

	# Count variables for calculating probabilities 
	attr1_count0a = 0
	attr1_count1a = 0
	attr1_count0b = 0
	attr1_count1b = 0
	attr2_count0a = 0
	attr2_count1a = 0
	attr2_count0b = 0
	attr2_count1b = 0

    # Calculating probabilities for attr1 and attr2
	for i in range(5):
		if d[i][0] == 0: #d[i] attr1 == 0
			if d[i][2] == 'a':
				attr1_count0a += 1
			else: attr1_count0b += 1
		
		elif d[i][0] == 1:
			if d[i][2] == 'a':
				attr1_count1a += 1
			else: attr1_count1b += 1

		if d[i][1] == 0:
			if d[i][2] == 'a':
				attr2_count0a += 1
			else: attr2_count0b += 1
		
		elif d[i][1] == 1:
			if d[i][2] == 'a':
				attr2_count1a += 1
			else: attr2_count1b += 1

	attr1_p_zero_given_a = attr1_count0a / count_a
	attr1_p_one_given_a = attr1_count1a / count_a
	attr1_p_zero_given_b = attr1_count0b / count_b
	attr1_p_one_given_b = attr1_count1b / count_b
	
	attr2_p_zero_given_a = attr2_count0a / count_a
	attr2_p_one_given_a = attr2_count1a / count_a
	attr2_p_zero_given_b = attr2_count0b / count_b
	attr2_p_one_given_b = attr2_count1b / count_b

	# Probabilty of class a given attr1 = 0 and attr2 = 0
	print(attr1_p_zero_given_a * attr2_p_zero_given_a * p_a)
	# Probabilty of class b given attr1 = 0 and attr2 = 0
	print(attr1_p_zero_given_b * attr2_p_zero_given_b * p_b)


if __name__ == '__main__':
	main()
