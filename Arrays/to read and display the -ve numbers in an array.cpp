// to read and display the -ve numbers in an array
#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
	}
	
}
