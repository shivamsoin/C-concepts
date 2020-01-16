// to print the factorial of the number
#include<stdio.h>
int main()
{
	int n,a=1;
	scanf("%d",&n);
	while(n>0)
	{
	   a=a*n;
	   n--;
	}
	printf("%d",a);
	return 0;
}

