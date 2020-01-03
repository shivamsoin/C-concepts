// 4to separate odd and even integers in separate arrays.  
#include<stdio.h>
int main()
{
	int a[100],even[100],k=0,l=0,odd[100],i,count=0,ccount=0,n;
	printf("Enter the number of elements of the array");
	scanf("%d",&n);
	printf("Enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even[k]=a[i];
			k++;
			count++;
		}
		else
		{
			odd[l]=a[i];
			l++;
			ccount++;
		}
	}
	printf("Even elements are:");
	for(i=0;i<count;i++)
	{
		printf("%d ",even[i]);
	}
	printf("\n Odd elemts are:");
	for(i=0;i<ccount;i++)
	{
		printf("%d ",odd[i]);
	}
	
}
