//program to find out the max number from given array using function..............................
#include <stdio.h>
int main() 
{
	int n;
	double arr[100];
	printf("Enter the number of elements(1 to 100): ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		printf("Enter array[%d]: ", i + 1);
		scanf("%d", &arr[i]);
	}

	arr[0];
	for (int i = 1; i < n; i++) 
	{
		if (arr[0] < arr[i]) 
		{
			arr[0] = arr[i];
		}
	}
	printf("Largest element = %d",arr[0]);
	return 0;
}