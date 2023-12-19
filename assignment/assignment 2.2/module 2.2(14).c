//print a,b,c,d using pattern............
#include<stdio.h>
main()
{
	int row,col,n;
	char ch ='A';
	
	printf("enter number:");
	scanf("%d",&n);
	
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf(" %c",ch);
			
			if(ch<'Z')
			ch++;
			else
			ch='A';
		}
		printf("\n");
	}
}