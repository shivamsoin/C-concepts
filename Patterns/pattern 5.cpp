
/*11111
11111
11011
11111
11111
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i%3==0&&j%3==0)
			{
				printf("0");
				
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
	return 0;
}
