// to find the majority element in the array
#include<stdio.h>
int main()
{
	int a[100],temp[100]={0},n,i,max=0,major=0;
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
		if(temp[a[i]]>max)
		{
			max=temp[a[i]];
			major=a[i];
		}
	}
	printf("%d",major);
}
