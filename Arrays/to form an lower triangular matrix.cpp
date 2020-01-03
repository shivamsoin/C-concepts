// to form an lower triangular matrix
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("Enter the elments of the matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix enter by the user is:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("The lower triqngular martrix is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j>=2)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
