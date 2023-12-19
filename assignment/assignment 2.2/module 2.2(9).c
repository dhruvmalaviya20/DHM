//print number in reverse order...........
#include <stdio.h>
int main()
{
	int n,r;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("your number in reverse : ");
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
	return 0;
}