arr = [1,3,4,6,9,7,8,6,5]

# Select elements one by one
for i in range(len(arr)):

	# Traverse through all elements on the left of the selected element
	for j in range(i):

		# Insert selected element in the sorted elements on the left
		# (Place it in the appropritae position in the left array)
		if arr[j] > arr[i]:
			arr.insert(j, arr[i])
			arr.pop(i+1)

print(arr)

