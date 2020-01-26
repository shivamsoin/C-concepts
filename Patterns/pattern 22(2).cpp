/*
Input any number: 22464
Output:

22464
2246
224
22
2
*/
#include<stdio.h>
int main()
{
	int count=0,t,i,j,n,x;
	printf("Enter the number");
	scanf("%d",&n);
	x=n;
    while(n!=0)
    {
    	t=n%10;
    	count++;
    	n=n/10;
	}
	for(i=1;i<=count;i++)
	{
		printf("%d\n",x);
		x=x/10;
	}
	
}
