//wap to find the smallest digit among the number
#include<stdio.h>
int main()
{
	int n,m,num=9;
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		if(m<num)
		{
			num=m;
		}
		n=n/10;
		
		
	}
	printf("\n THe smallest digit %d",num);
	return 0;
}
	
	
	

