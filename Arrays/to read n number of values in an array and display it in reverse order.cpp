// to read n number of values in an array and display it in reverse order
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
	printf("Elements enter by the user are :\n");
		for(i=0i;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n Elements in reverse order is:\n");
		for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
