/*Input any number: 24165
Output:

24165
4165
165
65
5
*/
#include<stdio.h>
int main()
{
	int i,j,n,x,rev,count=0,t,z,w;
	printf("enter the number");
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
		printf("%d",x);
		while(x!=0)
		{
		  t=x%10;\
		  rev=rev*10+t;
		  x=x/10;	
		}
		rev=rev/10;
		while(rev!=0)
		{
			z=rev%10;
			w=w*10+z;
			z=z/10;
		}
		x=w;
	}
}
