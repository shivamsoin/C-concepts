// ton print first and last digit of the number
#include<stdio.h>
int main()
{
	int n,t=0,x=0;
	scanf("%d",&n);
	t=n%10;
	while(n>0)
	{
		x=n%10;
		n=n/10;
	}
	printf("The first digit is:%d\nLast digit is:%d",x,t);
	return 0;
}
