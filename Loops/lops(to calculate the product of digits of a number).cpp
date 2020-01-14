//to calculate the product of digits of a number
#include<stdio.h>
int main()
{
	int n,a=0,b=1;
	scanf("%d",&n);
while(n>0)
{
	a=n%10;
	b=a*b;
	n=n/10;
	}    
	printf("\n %d",b);
}
