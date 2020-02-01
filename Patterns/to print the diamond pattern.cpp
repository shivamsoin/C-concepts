// to print the diamond pattern
#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,space;
	printf("Enter the number");
	scanf("%d",&n);
	space=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<space;j++)
		{
			printf(" ");
		}
		space--;
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	space=1;
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<space;j++)
		{
			printf(" ");
		}
		space++;
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
