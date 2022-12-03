// Program Statement:Write a program to evaluate a postfix expression.
//

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define MAX 100
float st[MAX];
int top=-1;
void push(float st[],float val);
float pop(float st[]);
float evaluatePostfixExp(char exp[]);
int main()
{
	float val;
	char exp[100];
	printf("\n Enter any postfix expression:");
	gets(exp);
	val=evaluatePostfixExp(exp);
	printf("\n Value of Postfix expression %f",val);
	getch();
	return 0;
}
float evaluatePostfixExp(char exp[])
{
	int i=0;
	float op1,op2,result;
	while(exp[i]!='\0')
	{
		if(isdigit(exp[i]))
			push(st,(float)(exp[i]-'0'));
		else
		{
			op2=pop(st);
			op1=pop(st);
			switch(exp[i])
			{
			case'+':result=op1+op2;
				break;
			case'-':result=op1-op2;
				break;
			case'*':result=op1*op2;
				break;
			case'/':result=op1/op2;
				break; }
		push(st,result);
		}
		i++;
	}
	return(pop(st));
}
void push(float st[], float val)
{
	if(top==MAX-1)
	printf("\n STACK OVERFLOW");
	else
	{
		top++;
		st[top]=val;
	}
}
float pop(float st[])
{
	float val=-1;
	if(top==-1)
	printf("\n Stack is Underflow");
	else
	{
		val=st[top];
		top--;
	}
	return val;
}
