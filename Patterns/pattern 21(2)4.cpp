/*
1
22
333
2222
11111
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number of the rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
