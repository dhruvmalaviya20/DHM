//C program to perform all arithmetic operations

#include<stdio.h>
int main()
{
	int number1,number2,sum;
	printf("enter first number: ");
	scanf("%d",&number1);
	printf("enter second number: ");
	scanf("%d",&number2);
	sum=number1+number2;
	printf("%d+%d=%d",number1,number2,sum);
	return 0;
}

