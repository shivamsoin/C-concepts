//wap to print sum of all even  numbers upto n
#include<stdio.h>
int main()
{
	int i=0,n,sum=0;
	scanf("%d",&n);
		while(i<=n)
	{
		sum=sum+i;
		i=i+2;
}
printf("%d",sum);
	return 0;
}
