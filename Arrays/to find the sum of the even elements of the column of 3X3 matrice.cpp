// to find the sum of the even elements of the column of 3X3 matrice
#include<stdio.h>
int main()
{
	int a[100][100],i,j,sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix enter by the user is");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[j][i]%2==0)
			{
				sum=sum+a[j][i];
				
				
			}
		}
		printf("%d",sum);
		printf("\n");
		sum=0;
		
	}
}
