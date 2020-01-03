// frequency of the array elements
#include<stdio.h>
int main()
{
	int a[100],temp[100]={0},i,n;
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
			printf("%d:%d\n",a[i],temp[a[i]]);
			temp[a[i]]=0;
		}
	}
}
