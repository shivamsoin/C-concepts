// to printf the sum of the rows and columns 
#include<stdio.h>
int main()
{
	int i,j,a[10][10],row,column,sum=0;
	printf("Enter the rows and the column of the matrix");
	scanf("%d %d",&row,&column);
	printf("Enter the elements of the array");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("sum of the rows elements");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			sum=sum+a[i][j];
			
		}
		printf("%d",sum);
		printf("\n");
		sum=0;
	}
	printf("sum of the columns elements");
	for(j=0;j<column;j++)
	{
		for(i=0;i<row;i++)
		{
			sum=sum+a[i][j];
			
		}
		printf("%d",sum);
		printf("\n");
		sum=0;
	}
	
	
	
}
