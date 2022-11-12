#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5
int size, i;

int stack1[MAX];
int stack2[MAX];

int top1 = -1;
int top2 = -1;

int isFull1()
{
	if (top1 == MAX - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull2()
{
	if (top2 == MAX - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isEmpty1()
{
	if (top1 == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isEmpty2()
{
	if (top2 == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push1(int a)
{

	if (isFull1())
	{
		printf("\nStack Overflow \n");
	}
	else
	{

		top1++;
		stack1[top1] = a;
	}
}
void push2(int a)
{

	if (isFull2())
	{
		printf("\nStack Overflow \n");
	}
	else
	{

		top2++;
		stack2[top2] = a;
	}
}

int pop1()
{

	if (isEmpty1())
	{
		printf("Stack Underflow\n");
		exit(1);
	}

	top1--;
	return (stack1[top1 + 1]);
}
int pop2()
{

	if (isEmpty2())
	{
		printf("\nStack2 is now Underflow\n");
	}

	top2--;
	return (stack2[top2 + 1]);
}

void enqueue(int x)
{
	push1(x); // creating stack1 from the scratch
}

void dequeue()
{
	int i, j;
	for (i = 1; i <= MAX; i++)
	{

		int a = pop1(); // pop form stack1
		push2(a);		// push into stack2
	}
	 //Print_stack2();
	 printf(".......stack_2.......\n");
	//int i;
	for (i = top2; i >= 0; i--)
	{
		printf("%d\n", stack2[i]);
	}//end
	
	int b = pop2(); // pop the top element from the stack2
					// Print_stack2();
	 printf(".......stack_2_updated.......\n");
	//int i;
	for (i = top2; i >= 0; i--)
	{
		printf("%d\n", stack2[i]);
	}
	for (j = 1; j <= MAX; j++)
	{

		int c = pop2(); // pop all the element form stack2
						// printf("%d",c);
		push1(c); // push all the element of stack 2 into stack1
	}
	// Print_stack1();
}

void Print_stack1()
{
	printf(".....stack_1.....\n");
	int i;
	for (i = top1; i >= 0; i--)
	{
		printf("%d\n", stack1[i]);
	}
}
void Print_stack1_updated()
{
	printf(".....stack_1_updated.....\n");
	int i;
	for (i = top1-1; i >= 0; i--)
	{
		printf("%d\n", stack1[i]);
	}
}
void Print_stack2()
{
	printf(".......stack_2.......\n");
	int i;
	for (i = top2; i >= 0; i--)
	{
		printf("%d\n", stack2[i]);
	}
}

int main()

{
	printf("\n the size of stack is 5\n");
	int deleted_data;

	int i;
	for (i = 1; i <= MAX; i++)
	{

		int pushed_element;
		printf("Enter the no.%d) element to be pushed in stack_1: ", i);
		scanf("%d", &pushed_element);
		enqueue(pushed_element);
	}
	Print_stack1();

	dequeue();
	Print_stack1_updated();

	return 0;
}