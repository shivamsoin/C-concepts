/*
12345
21234
32123
43212
54321
*/
#include<stdio.h>
int main()
{
	int i,j,z=1,x;
	for(i=1;i<=5;i++)
	{
		x=i;
		for(j=1;j<=5;j++)
		{
			
				if(j<i)
			{
			 printf("%d",x--);	
			}
			if(i==j||j>i)
			{
				printf("%d",z++);
			}
			
			
			
		}
		printf("\n");
		z=1;
	}
	
}
