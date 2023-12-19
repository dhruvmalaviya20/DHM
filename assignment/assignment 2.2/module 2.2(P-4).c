//print 1,2,3,4,5.........using pattern
#include <stdio.h>
int main()
{
	int row,col,n,num=1;
	printf("enter the number: ");
	scanf("%d",&n);
	
	for(row=1; row<=n; row++)
	{
		for(col=1; col<=row; col++)
		{
			printf("%d",num++);
		}
		printf("\n");
	}
	return 0;
}