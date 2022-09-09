mutex = 1
empty = 3
full = 0
x = 0

def wait(s):
	s-=1
	return s

def signal(s):
	s+=1
	return s

def producer():
	global x, full, empty, mutex

	mutex = wait(mutex)
	empty = wait(empty)
	full = signal(full)
	
	x += 1

	print("Producer produces " + str(x))

	mutex = signal(mutex)


def consumer():
	global x, full, empty, mutex

	mutex = wait(mutex)
	empty = signal(empty)
	full = wait(full)

	print("Consumer consumes " + str(x))
	x -= 1

	mutex = signal(mutex)



choice = 0
while choice < 3:
	print("1 Producer")
	print("2 Consumer")
	print("3 Exit")

	choice = int(input("Select an option: "))

	if choice == 1:
		if mutex == 1 and empty != 0:
			producer()
		else: print("Buffer is full")
	elif choice == 2:
		if mutex == 1 and full != 0:
			consumer()
		else: print("Buffer is empty")
