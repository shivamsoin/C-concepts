/*
01110
10001
10001
10001
01110
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==1||i==5||j==5)
			{
				if(i==1&&j==1||i==1&&j==5||i==5&&j==1||i==5&&j==5)
				{
					printf("0");
				}
				else
				{
				printf("1");
			}
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
