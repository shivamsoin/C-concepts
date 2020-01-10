// febronacci series
#include<stdio.h>
int main()
{
	int n,a=0,i=1,b=1,sum=0;
	scanf("%d",&n);
	while(i<=n)
	{
	  sum=a+b;
	  printf(" %d",a);
	  a=b;
	  b=sum;
	  i++;
	}
	return 0;
}
