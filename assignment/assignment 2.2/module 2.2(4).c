//Monday to Sunday using switch case.............
//#include <stdio.h>
//int main()
//{
//	int days;
//	printf("Enter the days (1 to 7): ");
//	scanf("%d",&days);
//	
//	switch(days)
//	{
//		case 1:
//			printf("Monday");
//			break;
//			
//		case 2:
//			printf("Tuesday");
//			break;
//			
//		case 3:
//			printf("Wednesday");
//			break;
//			
//		case 4:
//			printf("Thersday");
//			break;
//			
//		case 5:
//			printf("Friday");
//			break;
//			
//		case 6:
//			printf("Saturday");
//			break;
//			
//		case 7:
//			printf("Sunday");
//			break;
//			
//		default:
//			printf("Error: enter valid number");
//			break;
//	}
//}



#include <stdio.h>
int main()
{
	char vovel;
	printf("Enter any alphabates: ");
	scanf("%c",&vovel);
	
	switch(vovel)
	{
		case 'A':
			printf("Alphabate is : vovel");
			break;
		case 'a':
			printf("Alphabate is : vovel");
			break;
			
		case 'E':
			printf("Alphabate is : vovel");
			break;
		case 'e':
			printf("Alphabate is : vovel");
			break;
			
		case 'I':
			printf("Alphabate is : vovel");
			break;
		case 'i':
			printf("Alphabate is : vovel");
			break;
			
		case 'O':
			printf("Alphabate is : vovel");
			break;
		case 'o':
			printf("Alphabate is : vovel");
			break;
			
		case 'U':
			printf("Alphabate is : vovel");
			break;
		case 'u':
			printf("Alphabate is : vovel");
			break;
			
		default:
			printf("Character is a consonent");
			break;
	}
}