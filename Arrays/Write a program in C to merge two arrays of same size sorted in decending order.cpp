// Write a program in C to merge two arrays of same size sorted in decending order.  
#include<stdio.h>
int main()
{
	int a[100],n,i,j,k,b[100];
	printf("Enter the number of elements of an array");
	scanf("%d",&n);
    printf("Enter the elements of array 1\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("Enter the elements of array 2\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	k=n;
	for(j=0;j<n;j++)
	{
		a[k]=b[j];
		k++;
	}
	for(i=0;i<2*n;i++)
	{
	 for(j=i+1;j<2*n;j++)
	 {
	 	if(a[i]>a[j])
	 	{
	 		k=a[i];
	 		a[i]=a[j];
	 		a[j]=k;
		 }
	 }
	}
	for(i=0;i<2*n;i++)
	{
		printf("%d ",a[i]);
	}
}
