#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int size, i;

int *arr;

int top = -1;
int MAX;

int isFull()
{
	if (top == MAX - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isEmpty()
{
	if (top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int a)
{

	if (isFull())
	{
		printf("\nStack Overflow \n");
	}
	else
	{

		top++;
		arr[top] = a;
	}
}

int pop()
{

	if (isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}

	top--;
	return (arr[top + 1]);
}

// void Print(){

// 	for (i=0; i<size;i++){

//     printf("%d  ", arr[i]);
// }

// printf("\n");
// }
void Print()
{
	int i;
	for (i = top; i >= 0; i--)
	{
		printf("%d\n", arr[i]);
	}
}
int main()
{

	printf("\n Please type the size of stack ");

	scanf("%d", &size);
	MAX = size;

	arr = (int *)malloc(size * sizeof(int));

	int deleted_data;

	int i;

	int choice;
	while (1)
	{
		printf("1. Push\n2. Pop\n3. Print the top element\n4. Print All The Elements\n5. Quit\n");
		printf("Please Enter Your Choice :");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Enter element to be pushed: ");
			int p_element;
			scanf("%d", &p_element);
			push(p_element);
			break;
		case 2:
			deleted_data = pop();

			printf("Deleted data : %d\n", deleted_data);
			break;
		case 3:
			printf("Top: %d\n", arr[top]);
			break;
		case 4:

			Print();
			break;
		case 5:
			exit(1);
			break;
		default:
			printf("Wrong Choice");
		}
	}

	return 0;
}