//A program in C to store elements in an array and print it 
#include<stdio.h>
int main()
{
	int n,a[10],i;
	printf("Enter the number");
	scanf("%d",&n);
	printf("Enter the number of the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
