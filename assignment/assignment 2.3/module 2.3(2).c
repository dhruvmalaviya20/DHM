//Addition, Subtraction, Multiplication and Division using Switch case........................
#include <stdio.h>
int main()
{
	char ch;
	float a,b,ans=0;
	printf("enter any number from this");
	printf("\n1 for addition \n2 for subtraction \n3 for multiplication \n4 for division \nenter your choice: ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case '1':
			{
				printf("enter 2 numbers: ");
				scanf("%f%f",&a,&b);
				ans=a+b;
				printf("Addition is: %0.2f",ans);
				break;
			}
		case '2':
			{
				printf("enter 2 numbers: ");
				scanf("%f%f",&a,&b);
				ans=a-b;
				printf("Subtraction is: %0.2f",ans);
				break;
			}
		case '3':
			{
				printf("enter 2 numbers: ");
				scanf("%f%f",&a,&b);
				ans=a*b;
				printf("Multiplication is: %0.2f",ans);
				break;
			}
		case '4':
			{
				printf("enter 2 numbers: ");
				scanf("%f%f",&a,&b);
				ans=a/b;
				printf("Divition is: %0.2f",ans);
				break;
			}
	}
}