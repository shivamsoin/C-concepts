
// to print the second smallest digit
#include<stdio.h>
int main()
{
	int n,l=9,sl=9,t;
	scanf("%d",&n);
	while(n>0)
	{
		t=n%10;
		if(t<l)
		{
			sl=l;
			l=t;
		}
		else
		{
			if(t<sl)
			{
				sl=t;
			}
		}n=n/10;
	}printf("%d",sl);
	return 0;
}
