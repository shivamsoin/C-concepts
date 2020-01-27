/*
12345
 1234
  123
   12
    1
	*/
#include<stdio.h>
int main()
{
	int i,j,z=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j>=i)
			printf("%d",z++);
			else
			printf(" ");
		}
		z=1;
		printf("\n");
	}
}
