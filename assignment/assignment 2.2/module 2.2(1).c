//...................................Module 2.2 assignment.............................

//make a simple calculator....................
#include <stdio.h>
int main()
{
	int num1,num2,sum=0,sub,multi,div,mod;
	printf("enter the num1: ");
	scanf("%d",&num1);
	printf("enter the num2: ");
	scanf("%d",&num2);
	sum=num1+num2;
	sub=num1-num2;
	multi=num1*num2;
	div=num1/num2;
	mod=num1%num2;
	printf("\naddition is: %d\n",sum);
	printf("substriction is: %d\n",sub);
	printf("multiplication is: %d\n",multi);
	printf("division is: %d\n",div);
	printf("modulo is: %d %% %d = %d\n",num1,num2,mod);
	return 0;
}