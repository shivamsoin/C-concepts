// To find power of a number using loop
#include<stdio.h>
int main()
{
	int i,p,b=1,n;
	printf("\n enter number and power");
	scanf("%d %d",&n,&p);
	for(i=0;i<p;i++)
	{
		b=b*n;
	}
	printf("%d",b);
	return 0;
}
