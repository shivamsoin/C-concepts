//to enter a number and print its word
#include<stdio.h>
int main()
{
	int a;
	printf("\n Enter the number");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
			{
				printf("\n ONE");
			} 
			break;
	   	case 2:
			{
				printf("\n TWO ");
			}
			break;
		case 3:
			{
				printf("\n THREE");
			}
			break;
		case 4:
			{
				printf("\n FOUR");
			}
			break;
		case 5:
			{
				printf("\n FIVE");
			}
			break;
		case 6:
			{
				printf("\n SIX");
			}
			break;
		case 7:
			{
				printf("\n SEVEN");
			}
			break;
		case 8:
			{
				printf("\n EIGHT");
			}
			break;
		case 9:
			{
				printf("\n NINE");
			}
			break;
		default:
			{
				printf("Enter the number between 1 to 9");\
			}
										
					
	}
	return 0;
}
