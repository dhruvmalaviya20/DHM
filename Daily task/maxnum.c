#include <stdio.h>
int main()
{
	int num1,num2;
	printf("enter the num1: ");
	scanf("%d",&num1);
	printf("enter the num2: ");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("num1 is max");
	}
	else
	{
		printf("num2 is max");
	}
	return 0;
}
