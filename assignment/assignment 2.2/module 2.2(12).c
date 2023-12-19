//summation of first digit and last digit..........
#include <stdio.h>
int main()
{
	int n,sum,firstdigit,lastdigit;
	printf("enter the number: ");
	scanf("%d",&n);
	lastdigit = n%10;
	while(n>=10)
	{
		n=n/10;
	}
	firstdigit=n;
	
	sum=firstdigit+lastdigit;
	
	printf("ans : %d",sum);
	
	return 0;
}