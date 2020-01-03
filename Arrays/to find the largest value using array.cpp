// to find the largest value
#include<stdio.h>
int main()
{
	int a[10],i,large=0;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	printf("%d",large);
     
}
