//find a number is even or odd using ternary operator.............................

#include <stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Number %d is an even",n);
	}
	else
	{
		printf("Number %d is odd",n);
	}
	return 0;
}