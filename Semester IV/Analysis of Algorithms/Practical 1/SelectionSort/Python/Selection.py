// Python program for implementation of Selection Sort

arr = [1,6,8,4,5,9,7,1,3]

for i in range(len(arr)):
	
	# Find the smallest element in the remaining array
	smallest_index = i
	for j in range(i, len(arr)):
		if arr[j] < arr[smallest_index]:
			smallest_index = j
	
	# Swap that element to the right
	arr[i], arr[smallest_index] = arr[smallest_index], arr[i]

print(arr)