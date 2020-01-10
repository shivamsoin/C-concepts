//wap to find the largest digit among the number
#include<stdio.h>
int main()
{
	int n,m,num=1 ;
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		if(m>num)
		{
			num=m;
		}
		n=n/10;
		
		
	}
	printf("\n THe largest digit %d",num);
	return 0;
}
	
	
	

