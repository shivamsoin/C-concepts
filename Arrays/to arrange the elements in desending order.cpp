// to arrange the elements in desending order
#include<stdio.h>
int main()
{
	int a[100],i,j=0,n,ab;
	printf("Enter the number of the elements");
	scanf("%d",&n);
	printf("Enter the elements of the array");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
			ab=a[i];
			a[i]=a[j];
			a[j]=ab;
		}
		
	}
}
	printf("Elements in the assending order is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
