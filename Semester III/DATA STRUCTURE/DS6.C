#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct node{
int data;
struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
struct node *sort_list(struct node *);

int main()
{
	int option;
	do {
		printf("\n\n ******MAIN MENU******");
		printf("\n 1: Create a List");
		printf("\n 2: Display the List");
		printf("\n 3: Add a node in thebeginning");
		printf("\n 4: Add a node at the end");
		printf("\n 5: Add a node before agiven node");
		printf("\n 6: Add a node after a given node");
		printf("\n 7: Delete a node from the beginning");
		printf("\n 8: Delete a node from the end");
		printf("\n 9: Delete a given node");
		printf("\n 10: Delete a node after a given node");
		printf("\n 11: Delete the entire list");
		printf("\n 12: sort the list");
		printf("\n 13: EXIT");
		printf("\n*************************************");
		printf("\n\n Enter your option : ");
		scanf("%d", &option);
		switch (option) 
		{
			case 1:
			start = create_ll(start);
			printf("\n Linked List created");
			break;
			case 2:
			start = display(start);
			break;
			case 3:
			start = insert_beg(start);
			break;
			case 4:
			start = insert_end(start);
			break;
			case 5:
			start = insert_before(start);
			break;
			case 6:
			start = insert_after(start);
			break;
			case 7:
			start = delete_beg(start);
			break;
			case 8:
			start = delete_end(start);
			break;
			case 9:
			start = delete_node(start);
			break;
			case 10:
			start = delete_after(start);
			break;
			case 11:
			start = delete_list(start);
			break;
			case 12:
			start = sort_list(start);
			break;
			}
		} while (option !=13);
		getch();
		return 0;
		
}

struct node* create_ll(struct node *start)
{
	struct node *new_node, *ptr;
	int num;
	ptr = start ;
	printf("\n Enter -1 to end");
	printf("\n Enter the data : ");
	scanf("%d",&num);
	while(num!=-1)
		{
			new_node = (struct node *)
			malloc(sizeof(struct node));
			new_node -> data = num;
			new_node -> next = NULL;
			if(ptr == NULL)
			{
				ptr = new_node;
				start = ptr;
			}
			else
			{
				ptr -> next = new_node;
				ptr = new_node;		
			}
			printf("\n Enter the data : ");
			scanf("%d",&num);	
		}
		return start;
}

struct node *display(struct node *start)
{
	struct node *ptr;
	printf("\n****** Module displaying elements of Linked list ****");
	ptr = start;
	printf("\n");
	if(start == NULL)
	{
		printf("\n Linked List is empty");
	}
	while(ptr != NULL)
	{
		printf("\t %d",ptr->data);
		ptr = ptr -> next;
	}
	return start;
}

struct node *insert_beg(struct node *start)
{
	struct node *new_node;
	int num;
	printf("\n****** Module for inserting node at beginning ****");
	printf("\n Enter the data : ");
	scanf("%d",&num);
	new_node = (struct node *)
	malloc(sizeof(struct node *));
	new_node -> data = num;
	new_node -> next = start;
	start = new_node;
	return start;
}

struct node *insert_end(struct node *start)
{
	struct node *new_node, *ptr;
	int num;
	ptr = start;
	printf("\n****** Module for inserting node at beginning ****");
	printf("\n Enter the data : ");
	scanf("%d",&num);
	new_node = (struct node *)
	malloc(sizeof(struct node *));
	new_node -> data = num;
	new_node -> next = NULL;
	while(ptr -> next != NULL)
	{
		ptr = ptr -> next;
	}	
	ptr -> next = new_node;
	return start;
}

struct node *insert_before(struct node *start)
{
	struct node *new_node, *ptr, *preptr;
	int num,val;
	printf("\n****** Module for inserting node before a given node ****");
	printf("\n Enter the data : ");
	scanf("%d",&num);
	printf("\n Enter the value before which the data has to be inserted : ");
	scanf("%d",&val);
	new_node = (struct node *)
	malloc(sizeof(struct node *));
	new_node -> data = num;
	ptr = start;
	while(ptr -> data != val)
	{
		preptr = ptr;
		ptr = ptr -> next;
	}
	preptr -> next = new_node;
	new_node -> next = ptr;
	return start;
}

struct node *insert_after(struct node *start)
{
	struct node *new_node, *ptr, *postptr;
	int num,val;
	printf("\n****** Module for inserting node after a given node ****");
	printf("\n Enter the data : ");
	scanf("%d",&num);
	printf("\n Enter the value after which the data has to be inserted : ");
	scanf("%d",&val);
	new_node = (struct node *)
	malloc(sizeof(struct node *));
	new_node -> data = num;
	ptr = start;
	while(ptr -> data != val)
	{
		ptr = ptr -> next;
	}
	postptr = ptr->next;
	ptr -> next = new_node;
	new_node -> next = postptr;
	return start;
}

struct node *delete_beg(struct node *start)
{
	struct node *ptr;
	ptr = start;
	start = start -> next;
	free(ptr);
	return start;
}

struct node *delete_end(struct node *start)
{
	struct node *ptr, *preptr;
	ptr = start;
	while (ptr -> next != NULL )
	{
	preptr = ptr;
	ptr = ptr -> next;
	}
	preptr -> next = NULL;
	free(ptr);
	return start;
}

struct node *delete_after(struct node *start)
{
	struct node *ptr, *postptr;
	int val;
	printf("\n Enter the value after which the data has to be deleted : ");
	scanf("%d",&val);
	ptr = start;
	while (ptr -> data != val)
	{
		ptr = ptr -> next;
	}
	postptr = ptr -> next;
	ptr -> next = postptr -> next;
	return start;
}

struct node *delete_node(struct node *start)
{
	struct node *ptr, *preptr;
	int val;
	printf("\n Enter the value in linked list which has to be deleted : ");
	scanf("%d",&val);
	ptr = start;
	while (ptr -> data != val)
	{
		preptr = ptr;
		ptr = ptr -> next;
	}
	preptr -> next = ptr -> next;
	free(ptr);
	return start;
}

struct node *delete_list(struct node *start)
{
	struct node *ptr;
	ptr = start;
	while(ptr -> next != NULL)
	{
		printf("\n %d is to be deleted next",
		ptr -> data);
		start = delete_beg(ptr);
		ptr = start ;
	}
	printf("\n %d is to be deleted next", ptr -> data);
	start = delete_beg(ptr);
	return start;
}

struct node *sort_list(struct node *start)
{
	struct node *ptr1, *ptr2;
	int temp;
	ptr1 = start;
	if(ptr1 != NULL)
	{
		while (ptr1->next != NULL)
		{
			ptr2 = ptr1->next;
			while (ptr2 != NULL)
				{
					if (ptr1->data > ptr2->data)
						{
							temp = ptr1->data;
							ptr1->data = ptr2->data;
							ptr2->data = temp;
						}
					ptr2 = ptr2->next;
				}
			ptr1 = ptr1->next;
		}
	}
	return start;
}