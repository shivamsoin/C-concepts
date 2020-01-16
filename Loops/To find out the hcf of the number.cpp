// to find out the hcf of the number
#include<stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d %d",&a,&b);
	n=a%b;
	while(n>0)
	{
		a=b;
		b=c;
		n=a%b;
		
	}
	printf("%d",b);
	return 0;
	}
