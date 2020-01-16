// to print febronacci series(0112358...)
#include<stdio.h>
int main()
{
	int n,a=0,b=1,sum=0,i=1;
	printf("\n Enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
	sum=a+b;
	a=b;
	b=sum;
	i++;
		
	}
	printf("\n  the sum of febronacci series is %d",sum);
	return 0;
}
