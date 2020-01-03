// to multiply the matrix of any order with any number
#include<stdio.h>
int main()
{
	int a[100][100],r,c,i,j,x;
	printf("Enter the numbers of the rows of the matrix");
	scanf("%d",&r);
	printf("Enter the numbers of the column of the matrix");
	scanf("%d",&c);
	printf("Enter the number for multiplication");
	scanf("%d",&x);
	for(i=0;i<r;i++)
	{
	 for(j=0;j<c;j++)
	 {
	 	scanf("%d",&a[i][j]);
	 }
	}
	for(i=0;i<r;i++)
	{
	 for(j=0;j<c;j++)
	 {
	 	printf("%d ",x*a[i][j]);
	 }
	 printf("\n");
	}
}
