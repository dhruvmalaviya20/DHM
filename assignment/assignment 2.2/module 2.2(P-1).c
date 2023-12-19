//print 1,10,101......using pattern 
#include <stdio.h>
int main()
{
	int i,n,j;
	printf("enter the number: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
	return 0;
}