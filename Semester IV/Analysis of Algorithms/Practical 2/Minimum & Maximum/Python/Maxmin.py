// Python program for implementation of MinMax

def combine(tup1, tup2):

	# Compare mins
	if (tup1[0] < tup2[0]):
		min = tup1[0]
	else: min = tup2[0]

	# Compare maxs
	if (tup1[1] > tup2[1]):
		max = tup1[1]
	else: max = tup2[1]

	return (min, max)


def minmax(arr):

	if len(arr) > 2:
		mid = round(len(arr) / 2)
		return combine(minmax(arr[mid:]), minmax(arr[:mid]))

	elif len(arr) == 2:
		if arr[0] < arr[1]:
			return (arr[0],arr[1])
		return (arr[1], arr[0])

	else:
		return (arr[0], arr[0])


print(minmax(myArr));