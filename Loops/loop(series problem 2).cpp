//wap to find 1 + 1/1+2 + 1/1+2+3 + 1/1+2+3+4 + .....1/1+2+3+.....n
#include<stdio.h>
int main()
{
	int n;
float i,sum=0,total=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	sum=sum+i;
	total=total+(1/sum);
}
printf("%f",total);
	
	return 0;
	
}
