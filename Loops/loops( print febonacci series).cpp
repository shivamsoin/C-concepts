#include<stdio.h>
int main()
{
	int n,a=0,i=1,b=1,c;
	scanf("%d",&n);
	while(i<=n)
	{
	a=a+b;
	c=a;
	a=b;
	b=c;
	printf("%d",a);
	i++;	
	}
	
}
