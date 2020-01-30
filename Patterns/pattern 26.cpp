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
	 for(j=5;j>=i;j--)
	 {
	 	printf("%d",x++);
	 }
	 printf("\n");
	}
	return 0;
}
