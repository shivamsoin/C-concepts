// to swap 1 and last digit
#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,count=0,x=n,d=0,e=0,a=0,b=0,g=0,h=0,z=0;
	scanf("%d",&n);
	x=n;
	while(x>0)
	{
		count++;
		x=x/10;
	}
	d=count-2;
	e=count-1;
	
	t=n%10;
	z=n/10;
	g=pow(10,d);
	h=pow(10,e);
	a=z %g;
    b=n/h;
    printf("%d%d%d",t,a,b);
}
