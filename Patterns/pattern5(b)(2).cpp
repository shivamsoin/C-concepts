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
	for(i=1;i<=n;i++)
	{
		for(j=2*n-2;j>0;j--)
		{
			if(j<=2*i)
			{
				printf("%d",k++);
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
		k=1;
	}
}
