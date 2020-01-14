//wap to print1/1+1/2!+1/3!.....1/n!
#include<stdio.h>
int main()
{
	int a=1,i=1,n;
	printf("\n Enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		a=a*i;
		printf("1/%d+",a);
		i++;
	}
	return 0;
	
}
