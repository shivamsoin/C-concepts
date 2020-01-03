// to count dublicates
#include<stdio.h>
int main()
{
	int n,a[100],temp[100]={0},i,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		temp[a[i]]=temp[a[i]]+1;
	}
	for(i=0;i<n;i++)
	{
		if(temp[a[i]]>1)
		{
			temp[a[i]]=0;
			count++;
		}
	}
	printf("%d",count);
	
}
