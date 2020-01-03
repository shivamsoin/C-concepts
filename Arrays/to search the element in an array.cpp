// to search the element in an array
#include<stdio.h>
int main()
{
	int i,a[100],n,num,count=0,pos;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to number for searching");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			pos=i;
			count++;
		}
	}
	if(count>0)
	{
		printf("position of the number is:%d",pos);
	}
	else
	{
		printf("Number not found");
	}
} 
