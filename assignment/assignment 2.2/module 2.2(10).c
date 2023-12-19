//print max digit of given numbers...............
int main()
{
	int num,max=0;
	printf("enter the number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		if(num%10>max)
		{
			max=num%10;
		}
		num/=10;
	}
	printf("largest number is : %d",max);
	return 0;
}













//#include<stdio.h>
//int main()
//{
//	int num,max=0;
//	printf("Enter number:");
//	scanf("%d",&num);
//	
//	while(num!=0)
//	{
//		if(num%10>max)
//		{
//			max=num%10;
//		}
//		num/=10;
//	}
//	printf("Largest Number=%d",max);
//}