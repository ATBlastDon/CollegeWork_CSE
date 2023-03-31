# Python program for implementation of BinarySearch

def binary_search(arr, num):
	
	mid = round(len(arr)/2)

	if arr[mid] == num:
		return arr[mid]

	if arr[mid] > num:
		return binary_search(arr[:mid], num)
	else:
		return binary_search(arr[mid+1:], num)

# Do not forget to return the recursive calls, otherwise it will throw the results away.

sorted_array = [1,2,3,5,6,8,9,10]
result = binary_search(sorted_array, 9)
print(result)