// factorial by recursion
#include<stdio.h>
long int fac(int n)
{
	if(n==1)
	return 1;
	else
	return n*fac(n-1);
}
int main()
{
	int num;
	long int x=0;
	printf("Enter the the number ");
	scanf("%d",&num);
	x=fac(num);
	printf("%ld",x);
	
}
