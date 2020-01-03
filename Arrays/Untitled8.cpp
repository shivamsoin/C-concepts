// To count all negative number in the array
#include<stdio.h>
int main()
{
	int n,a[100],i,count=0;
	printf("Enter the number of the elements");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			count++;
		}
	}
	printf("THe number of the -ve elements in the array is:%d",count);
}
