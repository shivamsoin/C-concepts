// to find sum of the series 1/1! + 1/2! + 1/3!........1/n!
#include<stdio.h>
int main()
{
float n,i,pr=1,sum=0;
scanf("%f",&n);
for(i=1;i<=n;i++)
{
	pr=pr*i;
	sum=sum+(1/pr);
}
printf("%f",sum);
return 0;
}
