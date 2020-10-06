//A program in C to find the sum of all elements of the array
#include<stdio.h>
int main()
{
	int n,a[10],i,sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	printf("Enter the number of the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Your sum is:%d",sum);
}

