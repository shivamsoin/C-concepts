// to print odd and even elements of the array
#include<stdio.h>
int main()
{
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
		
	}
	printf("\n");
		for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d ",a[i]);
		}
		
	}
	
}

