//wap to printf the smallest digit from the number
#include<stdio.h>
int main()
{
	int n,m,num=10;
	printf("\n Enter the number");
	scanf("%d",n);
	while(n>0)
	{
		m=n%10;
		if(m<num)
		{
			num=m;
			
		}
		n=n/10;
	}
	printf("\n the smallest digit is %d",num);
	return 0;
	
}
