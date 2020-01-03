// sum of the minor diagonal elements
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
	 for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	 } 
	 printf("%d",sum);
}
