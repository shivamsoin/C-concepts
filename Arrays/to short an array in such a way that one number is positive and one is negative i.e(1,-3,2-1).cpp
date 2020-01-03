// to short an array in such a way that one number is positive and one is negative i.e(1,-3,2-1)
#include<stdio.h>
int main()
{
   int arr[100],i,n,pos[100],neg[100],j=0,count=0,ccount=0,k=0;
   printf("Enter the range of the array");
   scanf("%d",&n);
   printf("Enter the elementsof the array");
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   	if(arr[i]>0)
   	{
   		pos[j]=arr[i];
   		j++;
   		count++;
	   }
	   else
	   {
	   	neg[k]=arr[i];
	   	k++;
	   	ccount++;
	   }
   }
   j=0;
   k=0;
   if(count!=0)
   {
   	printf("{%d",pos[j++]);
   	count--;
   	for(i=0;i<n-1;i++)
   	{
   		if(i%2!=0)
   		{ 
   		   if(count!=0)
   		   {
   			printf(",%d",pos[j++]);
   			count--;
		   }
		   else if(count==0)
		   {
		   	printf(",%d",neg[k++]);
		   }
		   
	    }
		   
        else if(i%2==0)
	    {
		   	if(ccount!=0)
		   	{
		   	printf(",%d",neg[k++]);
		    }
		    else if(ccount==0)
		    {
		    	printf(",%d",pos[j++]);
			}
		}
	   }
	   printf("}");
   	
   }
   
   else if(count==0)
   {
   	printf("{%d",neg[k++]);
   	for(i=0;i<n-1;i++)
   	{
   		printf(",%d",neg[k++]);
	   }
	   printf("}");
   }
   
   
}
