//Write a program in C to accept two matrices and check whether they are equal. 
#include<stdio.h>
int main()
{
	int a[100][100],n=03,b[100][100],i,j;
	printf("Enter the elements of the array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
	}
	}
	printf("Enter the elements of the array 2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&b[i][j]);
	}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(a[i][j]==b[i][j])
		{
			n++;
		}
	}
	}
	if(n==9)
	{
		printf("Equal matrix");
	}
	else
	{
		printf("Unequal");
	}
	
}
