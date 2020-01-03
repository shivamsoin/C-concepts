// To count total no. of even & odd
#include<stdio.h>
int main()
{
	int n,a[10],i,e=0,o=0;
	printf("Enter the number");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("Even :%d\n Odd :%d",e,o);
}
