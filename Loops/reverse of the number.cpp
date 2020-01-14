// to reverse the digit
#include<stdio.h>
int main()
{
	int rev=0,n,t=0,x;
	printf("\n Enter the number");
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		t=n%10;
		rev=rev*10+t;
		n=n/10;
		
	}
	printf("%d and reverse of it is %d",x,rev);
}
