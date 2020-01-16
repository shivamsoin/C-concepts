// to check wheather the number is prime or not
#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Please enter the number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0);
		{
			count++;
		}
		
	}
	if(count==1)
	{
		printf("The number is prime");
	}
    else
    
	{
		printf("number is not prime");
	}
	return 0;
}

