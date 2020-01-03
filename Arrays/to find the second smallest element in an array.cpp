//to find the second smallest element in an array
#include<stdio.h>
int main()
{
	int large=999,n,a[100],i,small=999;
	printf("Enter the number of elements of the array");
	scanf("%d",&n);
	printf("Enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<large)
		{
			large=a[i];
		}
	

	}
for(i=0;i<n;i++)
	{
		if(a[i]!=large)
		{
		if(a[i]<small)
		{
			small=a[i];
		}
}

	}
	printf("%d",small);		
}
