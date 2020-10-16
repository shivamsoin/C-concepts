//wap to find the hcf of the number
#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("\n Enter a number ");
	scanf("%d %d",&a,&b);
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
		                                      
	}
	printf("\n %d",b);
	return 0;
}
