/*
5
54
543
5432
54321
*/
#include<stdio.h>
int main()
{
	int i,j,x;
	for(i=5;i>=1;i--)
	{
		x=5;
		for(j=5;j>=i;j--)
		{
		 printf("%d",x--);	
		}
		printf("\n");
	}
	return 0;
}
