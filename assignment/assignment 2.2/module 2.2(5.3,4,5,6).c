#include <stdio.h>
int main()
{
	int n,i,odd=0,even=0,evensum=0,oddsum=0;
	
	printf("enter number of elements: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		printf("enter element number %d : ",i);
		scanf("%d",&i);
		
		if(i%2==0)
		{
			even++;
			evensum+=i;
		}
		else
		{
			odd++;
			oddsum+=i;
		}
	}
	printf("even numbers : %d\n",even);
	printf("odd numbers : %d\n",odd);
	printf("sum of even number = %d\n",evensum);
	printf("sum of odd number = %d\n",oddsum);
	return 0;
}