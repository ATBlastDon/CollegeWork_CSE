# Solution for 4 Queens problem

# Each queen placed in a seperate row
sln_vector = [-1,-1,-1,-1]

for i in range(4):
	sln_vector[0] = i

	for j in range(4):
		# Ensure queen is not placed in same column and diagonally
		if j not in sln_vector[:1] and abs(i-j) != 1:
			sln_vector[1] = j

			for k in range(4):
				if k not in sln_vector[:2] and abs(j-k) != 1:
					sln_vector[2] = k

					for l in range(4):
						if l not in sln_vector[:3] and abs(k-l) != 1:
							sln_vector[3] = l
							print(sln_vector)
