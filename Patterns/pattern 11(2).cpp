/*
1
121
12321
1234321
123454321
*/
#include<stdio.h>
int main()
{
	int i=0,j=0,n,x=0;
	printf("Enter the number of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
			if(j<=i)
			{
				x=x+1;
				printf("%d ",x);
				
			}
			else
			{
				x=x-1;
				printf("%d ",x);
				
			}
		}
		printf("\n");
		x=0;
	}
}
