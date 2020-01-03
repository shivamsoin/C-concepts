// to enter n elements and sum those elements whose are equal or greater than k(number enter by the user)
#include<stdio.h>
int main()
{
	int n,k,a[100],i,sum=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>=k)
		{
			sum=sum+a[i];
		}
	}
	printf("%d",sum);
}


