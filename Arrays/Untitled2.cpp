// to subtract the matrix
#include<stdio.h>
int main()
{
	int i,a[10][10],b[10][10],j,row,column,c[10][10];
	printf("Enter the rows and columns");
	scanf("%d %d",&row,&column);
	printf("Enter the elements of the first array");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the first array");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
		for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		   printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
}
