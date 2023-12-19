//print table up to given numbers...............
#include <stdio.h>
int main()
{
	int i,n,multiple;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=1; i<=10; i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	
	return 0;
}