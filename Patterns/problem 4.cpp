#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		if(i==1||i==5)
		{
			
		for(j=1;j<=5;j++)
		
		{
			printf("1");
		}
		
		}
		else
		{
			for(k=1;k<=5;k++)
			{
			       if(k==1||k==5)
			       {
			      	printf("1");
			       }
			       else
			      {
			   	printf("0");
			      }
			      
			}
		}
		printf("\n");
	}
	return 0;
}
