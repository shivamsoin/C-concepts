// to check wheather thematrix is identity or not
#include<stdio.h>
int main()
{
	
	int a[10][10],i,j,row,col,flag;
	printf("Enter the number of rows and column of the matrix");
	scanf("%d %d",&row,&col);
	printf("Enter the elements of the matrix");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<row;i++)
        {
         	for(j=0;j<col;j++)
         	{
         	   if(i==j && a[i][j]!=1)
				{
					flag=-1;
					break;
				}
				else if(i!=j&& a[i][j]!=0)
				{
					flag=-1;
					break;
					}		
			 }
	
		}
		if(flag==0)
		{
			printf("It is a Identidy Matrix");
		}
		else 
		{
			printf("It ia not a Identity Matrix");
		}
}
