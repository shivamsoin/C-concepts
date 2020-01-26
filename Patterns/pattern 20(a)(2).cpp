/*
    1
   12
  123
 1234
12345
 1234
  123
   12
    1
*/
#include<stdio.h>
int main()
{
	int i,j,n,x=1;
	printf("Enter the number of rows");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<=n;j++)
		{
			if(j<i)
			{
				printf(" ");
			}
			 else
			{
				printf("%d",x);
				x++;
			} 
			
		}
		printf("\n");
		x=1;
	}
		for(i=0;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<i)
			{
				printf(" ");
			}
			else
			{
				printf("%d",x);
				x++;
			}
			
		}
		printf("\n");
		x=1;
	}
	
	
}

