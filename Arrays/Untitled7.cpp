// To reverse the array
#include<stdio.h>
int main()
{
	int n,a[100],i,num,flag=0,pos,b[100],k=0;
	printf("Enter the number of the elements");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i++)
	{
		b[k]=a[i];
		k++;
	}
	printf("array in the reverse order is:")
	for(k=0;k<n;k++)
	{
		printf("%d",b[k]);
	}
}
