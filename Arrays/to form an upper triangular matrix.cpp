// to form an upper triangular matrix
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("enter the elements of matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix enter by the user is :\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("The upper triangular matrix is :\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i+j)<=2)
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
