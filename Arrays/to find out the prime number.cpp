// to find out the prime number
#include<stdio.h>
int main()
{
	int a[10],i,count,j;
	for(i=0;i<=9;i++)
	{
		 
		scanf("%d",&a[i]);
	}
	   for(i=0;i<=9;i++)
    {	 count=0;
		for(j=1;j<=a[i];j++)
		{
			
			if(a[i]%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
		 printf("%d",a[i]);	
		}
   }
}
