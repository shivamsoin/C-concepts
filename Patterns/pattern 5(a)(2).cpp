/*

1
123
12345
1234567
123456789
*/
#include<stdio.h>
int main()
{
	int i=0,j=0,n,k=1;
	printf("Enter the number of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*i+1;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
		k=1;
	}
}
