// to check wheater the number is strong number or not
#include<stdio.h>
int main()
{
	int n,fac=1,sum=0,x=0,i,t=0;
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		t=n%10;
		for(i=1;i<=t;i++)
		{
			fac=fac*i;
		}
		sum=sum+fac;
		fac=1;
		n=n/10;
	}
	if(sum==x)
	{
		printf("\n strong number");
	}
	else
	{
		printf("\n not a strong number");
	}
	
	return 0;
}
