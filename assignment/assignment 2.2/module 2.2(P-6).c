//print half star dimond pattern................
#include<stdio.h>
main()
{
	int row,col,n;
	
	printf("enter number:");
	scanf("%d",&n);
	
	for (row=1;row<=n;row++)
	{
		for (col=1;col<=row;col++)
		{
			printf("*");
		}
		printf ("\n");
	}
	
	for (row=n;row>=1;row--)
	{
		for (col=2;col<=row;col++)
		{
			printf("*");
		}
		printf ("\n");
	}
}