// insert the element at the particular place (starting at zero)
#include<stdio.h>
int main()
{
	int x,y,a[100],n,i;
	printf("Enter the number of the elements of the array");
	scanf("%d",&n);
	printf("Enter the position of the number added");
	scanf("%d",&x);
	printf("Enter the number which is to be added");
	scanf("%d",&y);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=x;i--)
	{
		a[i+1]=a[i];
	}
	a[x]=y;
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}
