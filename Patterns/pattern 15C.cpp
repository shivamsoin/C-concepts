/*
55555
45555
34555
23455
12345
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
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

