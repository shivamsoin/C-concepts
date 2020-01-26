/*
1
2  4
7  11 16
22 29 37 46
56 67 79 92 106
*/
#include<stdio.h>
int main()
{
	int i,j,n,x=1,z=1;
	printf("Enter the number of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",x);
			x=x+z;
			z++;
		}
		printf("\n");
	}
}
