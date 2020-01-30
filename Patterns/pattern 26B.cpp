/*
12345
 2345
  345
   45
    5
*/
#include<stdio.h>
int main()
{
	int i,j,x;
	for(i=1;i<=5;i++)
	{
		x=i;
	 for(j=1;j<=5;j++)
	 {
	 	if(j>=i)
	 {	printf("%d",x++);}
	 	else
	 	{printf(" ");}
	 }
	 printf("\n");
	}
	return 0;
}
