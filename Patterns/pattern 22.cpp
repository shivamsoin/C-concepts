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
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			
			if(j<=i)
			{
				printf("%d",z++);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		z=1;
	}
	return 0;
}
