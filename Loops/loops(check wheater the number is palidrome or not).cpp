//wap to check wheater the number is palidrome or not
#include<stdio.h>
int main()
{
	int n,x,t,rev=0;
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		t=n%10;
		rev=rev*10+t;
		n=n/10;
	 } 
	 if(x==rev)
	 {
	 	printf("\n it is an palidrome number");
	 }
	 else
	 {
	 	printf("\n it is not an palidrome number");
	 }
return 0;
}




