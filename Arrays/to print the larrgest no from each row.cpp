// to print the larrgest no from each row
#include<stdio.h>
int main()
{
	int a[3][3],i,j,large=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d ",&a[i][j]);
		}
	}
	printf("The required matrix is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("The largest numbers are :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>large)
			{
				large=a[i][j];
			}
		}
		printf("%d",large);
		large=0;
		printf("\n");
	}
}
