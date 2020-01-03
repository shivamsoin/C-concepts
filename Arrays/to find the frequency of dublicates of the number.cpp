// to find the frequency of dublicates of the number
#include<stdio.h>
int main()
{
	int a[10],i,temp[a[10]]={0},n;
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
		if(temp[a[i]]>=1)
		{
			printf("number %d=frequency%d ",a[i],temp[a[i]]);
			temp[a[i]]=0;
		}
	}
}
