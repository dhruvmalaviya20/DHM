//swipe the value whithout using third variable.....................
#include <stdio.h>
int main()
{
	int a,b;
	printf("value of a = ");
	scanf("%d",&a);
	printf("value of b = ");
	scanf("%d",&b);
	printf("befor swiping the value: \nvalue of a = %d \nvalue of b = %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swiping the value: \n");
	printf("value of a = %d \n",a);
	printf("value of b = %d \n",b);
}