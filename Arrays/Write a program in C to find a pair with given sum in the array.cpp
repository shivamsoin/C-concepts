// Write a program in C to find a pair with given sum in the array (The given array 6 8 4 -5 7 9 ;The given sum : 15;output 6,9)
#include<stdio.h>
int main()
{
	int sum,arr[100],i,n,j;
	printf("Enter the range of the array");
	scanf("%d",&n);
	printf("Enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number which you get");
	scanf("%d",&sum);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==sum)
			{
				printf("[%d,%d] ",arr[i],arr[j]);
			}
		}
	}
	
}
