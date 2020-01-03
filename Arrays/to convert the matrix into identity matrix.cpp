// to convert the matrix into identity matrix
#include<stdio.h>
int main()
{
	int i,j,r1,c1;
	printf("Enter the rows and column of the matrix ");
	scanf("%d %d",&r1,&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			if(i==j)
			{
				printf("1 ");
			}
			else {
				printf("0 ");
			}
		}
		printf("\n");
	}
}
