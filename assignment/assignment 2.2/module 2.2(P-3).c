//print star piramid pattern ......................
#include<stdio.h>
int main()
{
	int row,col,n,space;
	
	printf("ENTER THE VALUE ");
	scanf("%d",&n);

	for (row=0; row<n; row++)
	{
		for (space=n-row; space>1; space--) 
		{ 
			printf(" "); 
		}
		
		for (col=0; col<= row; col++) 
		{ 
    		printf("* ");
		}
    	printf("\n"); 
	}
}
	
