// sum of the even elements of an array
#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	for(i=0;i<=10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
		sum=sum+a[i];
	}
	}
	printf("%d",sum);
}
