// To delete the element by giving its value only
#include<stdio.h>
int main()
{
	int n,a[100],i,num,flag=0,pos;
	printf("Enter the number of the elements");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element u want to delete");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			flag=1;
			pos=i;
		}
	}
	if(flag==1)
	{
		for(i=pos;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		for(i=0;i<n-1;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	else
	{
		printf("Number is not found in the array");
	}
	
}
