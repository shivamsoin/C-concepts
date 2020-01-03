// to printf the sum of the diagonal elements
#include<stdio.h>
int main()
{
		int a[3][3],i,j,sum=0;

	printf("Enter the elments of the matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
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
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j==i)
			{
				sum=sum+a[i][j];
			}
			
		}
	}
		printf("%d",sum);

}
