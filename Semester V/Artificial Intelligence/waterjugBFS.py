from copy import copy

# Water Jug problem using BFS

jug1Capacity = 4
jug2Capacity = 3

# Initial Condition
intialNode = [0,0]

# Goal Condition
goalNode = [4,2]

# Queue for BFS
BFSQueue = []

# List to store visited nodes to avoid them
generated = []

# Generate all possiblilites according to 6 rules
def generate(node):

	#Empty Jug 1
	tempNode = [0, node[1]]
	if tempNode not in generated:
		BFSQueue.append(tempNode)
		generated.append(tempNode)
		if goalNode == tempNode:
			return False

	#Empty Jug 2
	tempNode = [node[0], 0]
	if tempNode not in generated:
		BFSQueue.append(tempNode)
		generated.append(tempNode)
		if goalNode == tempNode:
			return False

	#Fill Jug 1
	tempNode = [jug1Capacity, node[1]]
	if tempNode not in generated:
		BFSQueue.append(tempNode)
		generated.append(tempNode)
		if goalNode == tempNode:
			return False

	#Fill Jug 2
	tempNode = [node[0], jug2Capacity]
	if tempNode not in generated:
		BFSQueue.append(tempNode)
		generated.append(tempNode)
		if goalNode == tempNode:
			return False
	
	#Transfer Jug 1 to Jug 2
	remainingCapacity = jug2Capacity - node[1]

	if node[0] <= remainingCapacity:
		tempNode = [0, node[1] + node[0]]
	else: tempNode = [node[0] - remainingCapacity, jug2Capacity]

	if tempNode not in generated:
		BFSQueue.append(tempNode)
		generated.append(tempNode)
		if goalNode == tempNode:
			return False

	#Transfer Jug 2 to Jug 1
	remainingCapacity = jug1Capacity - node[0]

	if node[1] <= remainingCapacity:
		tempNode = [node[0] + node[1], 0]
	else: tempNode = [jug1Capacity, node[1] - remainingCapacity]
	
	if tempNode not in generated:
		BFSQueue.append(tempNode)
		generated.append(tempNode)
		if goalNode == tempNode:
			return False

	return True


def main():

	global intialNode, BFSQueue, generated

	# BFS Logic
	BFSQueue.append(intialNode)
	generated.append(intialNode)

	if goalNode == intialNode:
		print("intialNode is same as goalNode")

	while(generate(BFSQueue[0])):
		print(BFSQueue[0])
		BFSQueue.pop(0)

	print(generated)





if __name__ == '__main__':
	main()




