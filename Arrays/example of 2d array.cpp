// Example of the array
#include<stdio.h>
int main()
{
	int a[][3]={10,5,2,3,2,6,1,2,7},i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
}
