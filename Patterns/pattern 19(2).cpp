/*
1
3  2
4  5  6
10 9  8  7
11 12 13 14 15
*/
#include<stdio.h>
int main()
{
	int i,j,n,value=1,count;
	printf("Enter the numbers of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
		if(i%2!=0)
		{
			value=count+1;
		}
		else
		{
			value=count+i;
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",value);
			if(i%2!=0)
			{
				value++;
			}
			else
			{
				value--;
			}
			count++;
		}
		printf("\n");
	}
		
		
}
