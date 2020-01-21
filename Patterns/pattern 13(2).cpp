/*
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/
#include<stdio.h>
int main()
{
	int i,j,n,x=1;
	printf("Enter the number of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",x++);
		}
		printf("\n");
	}
}
