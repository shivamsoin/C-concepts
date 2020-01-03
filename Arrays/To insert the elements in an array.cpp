// To insert the elements in an array
#include<stdio.h>
int main()
{
	int a[100],i,n,pos,num;
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the elements of the aray");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number Enter the pos");
	scanf("%d %d",&num,&pos);
	pos--;
	for(i=n-1;i>pos;i--)
	{
		a[i+1]=a[i];
	}
	
	a[pos]=num;
	for(i=0;i<=n;i++)
	{
	printf("\n%d ",a[i]);	
	}
}
