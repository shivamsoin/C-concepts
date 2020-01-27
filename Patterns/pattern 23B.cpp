/*
    1
   21
  321
 4321
54321
*/
#include<stdio.h>
int main()
{
	int i,j,x,y=1;
	for(i=5;i>=1;i--)
	{
		x=y;
		for(j=1;j<=5;j++)
		{
			if(j>=i)
			{
				printf("%d",x--);
			}
			else
			{
				printf(" ");
			}
		}
		y++;
		printf("\n");
	 } 
	 return 0;
}
