// To find fibonacci series and print the sum of the even numbers
# include<stdio.h>
int main()
{
	int n,a=0,b=1,i,x=0,sum,t=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    x=a+b;
		if(a%2==0)
		{
			sum=sum+a;
		}
		t=a;
		a=x;
		b=t;
		
		
	}
	printf("%d",sum);
	return 0;
}
