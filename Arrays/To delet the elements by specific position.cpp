// To delete the elements by specific position
#include<stdio.h>
int main()
{
	int n,a[100],i,pos;
	printf("Enter the number of the elements");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the posistion of the element u want to delete");
	scanf("%d",&pos);
	if(pos>n+1)
	{
		printf("invalid position");
	}
	else
	{
		for(i=pos-1;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",a[i]);
	}
}
