/*
54321
54322
54333
54444
55555
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i+j<=5)
			{
				printf("%d",i+j-1);
			}
			else
			{
				printf("5");
			}
		}
		printf("\n");
	}
	return 0;
	}
