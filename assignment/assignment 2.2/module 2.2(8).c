//print fibonaci series.........
#include <stdio.h>
int main()
{
	int i,n,x,y,z;
	printf("enter the term : ");
	scanf("%d",&n);
	x=0;
	y=1;
	printf("fibonacci series : %d",x);
	for(i=0; i<n; i++)
	{
		z=x+y;
		printf(" %d",y);
		x=y;
		y=z;
	}
	return 0;
}


