/*

1
131
13531
1357531
135797531
*/
#include<stdio.h>
int main()
{
	int i=0,j=0,n,x=-1;
	printf("Enter the number of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
			if(j<=i)
			{
				x=x+2;
				printf("%d ",x);
				
			}
			else
			{
				x=x-2;
				printf("%d ",x);
				
			}
		}
		printf("\n");
		x=-1;
	}
}
