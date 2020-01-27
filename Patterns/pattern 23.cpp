/*
1
21
321
4321
54321
*/
#include<stdio.h>
int main()
{
	int i,j,x;
	for(i=1;i<=5;i++)
	{
		x=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",x--);
		}
		printf("\n");
	}
	return 0;
	
}
