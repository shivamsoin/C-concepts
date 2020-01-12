//wap to print natural number uptonn in reversed order
#include<stdio.h>
int main()
{
	int i,n;
	printf("\n Enter the number ");
	scanf("%d",&n);
	i=n;
	while(i>0)
	{
		printf("%d",i);
		i--;
	}
	return 0;
}
