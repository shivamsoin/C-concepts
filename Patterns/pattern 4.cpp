/*
11111
10001
10001
10001
11111
*/
#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
   {
   	if(i==1||i==5)
   	{
   		for(j=1;j<=5;j++)
   		printf("1");
	   }
	   else
	   {
	   	for(j=1;j<=5;j++)
	   	if(j==1||j==5)
	   	
	   	{
	   		printf("1");
		   }
		   else
		   {
		   	printf("0");
		   }
	   }
	   printf("\n");
   }
   return 0;
}
