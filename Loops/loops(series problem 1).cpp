// to find 1/1! + 1/2! + 1/3!......1/n!
#include<stdio.h>4

int main()
{
	int n,i,j,fac=1.0;
	float a,b,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			fac=fac*j;
			a=1/fac;
	
		}
		printf("\n%d",fac);
	
	
		
	}
	return 0;
}
