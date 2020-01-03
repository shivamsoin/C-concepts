// to delete the element from specific position (staring from 0)
#include<stdio.h>
int main()
{
	int n,a[100],k,i;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=k;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
}

