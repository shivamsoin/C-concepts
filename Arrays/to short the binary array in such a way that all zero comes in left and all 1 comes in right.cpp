// to short the binary array in such a way that all zero comes in left and all 1 comes in right
#include<stdio.h>
int main()
{
	int arr[100],i,n,count=0,zero[100],one[100],j=0,k=0;
	printf("Enter the range of thearray");
	scanf("%d",&n);
	printf("Enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==0)
		{
			zero[j]=arr[i];
			j++;
			count++;
		}
		else
		{
			one[k]=arr[i];
			k++;
			
		}
    } 
    j=0;
    for(i=0;i<count;i++)
    {
    	arr[j]=zero[i];
    	j++;
	}
	for(i=0;i<k;i++)
	{
		arr[j]=one[i];
		j++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
