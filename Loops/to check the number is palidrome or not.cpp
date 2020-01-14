// to check is palidrome or not
#include<stdio.h>
int main()
{
	int n,rev=0,c,x;
    printf("\n Enter the number ");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
    	c=n%10;
    	rev=rev*10+c;
		n=n/10;
		
	}
	if(rev==x)
	printf("\n It is an palidrome number");
	else
	printf("\n It is not a palidrome number");
	return 0;
}
