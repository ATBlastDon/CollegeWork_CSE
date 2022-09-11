#include<stdio.h>
#include<conio.h>

#define MAX 50
int queue[MAX];
int front=-1,rear=-1;
void insert(void);
int process_first(void);
int peek(void);
void display(void);
int main()
{
	clrscr();
	int option,val;
	do
	{
		printf("\n MAIN MENU");
		printf("\n 1.Insert an element");
		printf("\n 2.Process first element");
		printf("\n 3.peek");
		printf("\n 4.Display the Queue");
		printf("\n 5.EXIT");
		printf("\n Enter Your Option: ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
			     insert();
			     break;
			case 2:
			     val=process_first();
			     if(val!=-1)
			     printf("\n The no. deleted from the queue is: ");
			     break;
			case 3:
			     val=peek();
			     if(val!=-1)
			     printf("\n The First value stored at the top of the queue is:");
			     break;
			case 4:
			     display();
			     break;
		}
	}while(option!=5);
	getch();
	return 0;
}

void insert()
{
	int num;
	printf("\n Enter The no. to be inserted in the queue:");
	scanf("%d",&num);
	if(rear==MAX-1)
		printf("\n OVERFLOW");
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=num;
	}
	else
	{
		rear++;
		queue[rear]=num;
	}
}

int process_first()
{
	int val;
	if(front == -1 || front > rear)
	{
		printf("\n UNDERFLOW");
		return -1;
	}
	else
	{
		val = queue[front];
		front++;
		if(front > rear)
			front = rear = -1;
		return val;
	}
}

int peek()
{
	if(front == -1 || front > rear)
	{
		printf("\n QUEUE IS EMPTY");
		return -1;
	}
	else
	{
		return queue[front];
	}
}

void display()
{
	int i;
	printf("\n");
	if(front==-1 || front>rear)
		printf("\n QUEUE IS EMPTY");
	else
	{
		for(i=front; i<=rear; i++)
		printf("\t %d", queue[i]);
	}
}