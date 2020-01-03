// to find the maniority element
#include<stdio.h>
int main()
{
	int a[100],temp[100]={0},n,i,min=999,major=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp[a[i]]=temp[a[i]]+1;
	}
	for(i=0;i<n;i++)
	{
		if(temp[a[i]]<min)
		{
			min=temp[a[i]];
			major=a[i];
		}
	}
	printf("%d",major);
}
