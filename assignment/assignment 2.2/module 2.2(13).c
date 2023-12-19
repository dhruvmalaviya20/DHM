//print 1,10,101......using pattern 
#include <stdio.h>
int main()
{
	int row,n,col;
	printf("enter the number: ");
	scanf("%d",&n);
	
	for(row=1; row<=n; row++)
	{
		for(col=1; col<=row; col++)
		{
			printf("%d",col%2);
		}
		printf("\n");
	}
	return 0;
}