//print a,ab,abc using pattern.................
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
			printf("%c",col+64);
		}
		printf("\n");
	}
	return 0;
}