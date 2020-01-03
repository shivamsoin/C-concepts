// to number of the dublicates
#include<stdio.h>
int main()
{
	int n,a[10],i,temp[100]={0};
	printf("Enter the number of the elements ");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp[a[i]]=temp[a[i]]+1;
	}
    for(i=0;i<n;i++)
    {
    	if(temp[a[i]]>1)
    	{
    		printf("%d",temp[a[i]]);
    		temp[a[i]]=0;
		}
	}
}
