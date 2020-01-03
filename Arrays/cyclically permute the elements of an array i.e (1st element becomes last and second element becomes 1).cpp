//cyclically permute the elements of an array i.e (1st element becomes last and second element becomes 1).
#include<stdio.h>
int main()
{
	int a[100],n,i,x;
	printf("Enter the range of the array\n");
	scanf("%d",&n);
	printf(" Enter the elelments of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	x=a[0];
	for(i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=x;
	printf(" Cyclically permute elements of the array is\n");
	for(i=0;i<n;i++)
	{
	   printf("%d",a[i]);
	}
}
