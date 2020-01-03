// to arrange the elements in assenting order and insert the elements in the array in particular place
#include<stdio.h>
int main()
{
	int a[100],i,j,ab,n,x,pos=0,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			
					ab=a[i];
					a[i]=a[j];
					a[j]=ab;
					j--;
			}
		}
		
	
	}
	printf("Enter the number which is to be enter");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
	 if(x<a[i])	
	 {
	 	pos=i;
	 	c++;
	 	break;
	 }
	}
	if(c!=0)
	{
	
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=x;
}
else if(c==0)
{
   a[n]=x;	
}
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}

}

