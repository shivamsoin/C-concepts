// to find the of the even elements in the rows of the 3X3 matrix
#include<stdio.h>
int main()
{
	int a[100][100],i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		
		}
	}
	printf("Matrix enter by the user is:\n");
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
		if(a[i][j]%2==0)
		{
			sum=sum+a[i][j];
		}
	
		
		}
			printf("%d",sum);
		printf("\n");
		sum=0;
	}
	
}
