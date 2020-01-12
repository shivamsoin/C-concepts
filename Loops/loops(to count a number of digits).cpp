//wap to count a number of digits
#include<stdio.h>
int main()
{
	int count=0,n;
	scanf("%d",&n);
		while(n>0)
	{
		count++;
		n=n/10;
}
printf("%d",count);
	return 0;
}
