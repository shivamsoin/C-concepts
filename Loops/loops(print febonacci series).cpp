//wap to print febonacci series
#include<stdio.h>
int main()
{
	int a=0,n,b=1,i=0,sum=0;
	printf("\n Enter the number ");
	scanf("%d",&n);
	while(i<=n)
	{
	sum=a+b;
	printf("%d",a);
	a=b;
	b=sum;
	i++;	
	}
	return 0;
}
