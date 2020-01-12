// to ckeck niumber is armstrong or not
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,c=0,x,t,sum=0,y,z;
	scanf("%d",&n);
	y=n;
	z=n;
	while(n>0)
	{
		n=n/10;
		c++;
	}
	while(y>0)
	{
		t=y%10;
		x=pow(t,c);
		sum=sum+x;
	   y=y/10;
		
	}
	if(sum==z)
	{
			printf("\n Number is Armstrong");
	}
	else 
	{
			printf(" \n Number is not Armstrong");
	}
}
