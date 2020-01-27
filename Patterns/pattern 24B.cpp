/*
    5
   54
  543
 5432
54321
*/
#include<stdio.h>
int main()
{
	int i,j,x;
	for(i=5;i>=1;i--)
	{
		x=5;
		for(j=1;j<=5;j++)
		{
			if(j>=i)
			{
				printf("%d",x--);
			}
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
