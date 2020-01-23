/*
1        1
12      21
123    321
1234  4321
1234554321
*/
#include<stdio.h>
int main()
{
	int i,j,k=1,n,z;
	printf("Enter the number of rows");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		z=2*i-2;
		for(j=1;j<=2*n;j++)
		{
			
			if(j<=n+1-i)
			{
				printf("%d",k++);
			}
			else if(j>n+1-i&&z!=0)
			{
				printf(" ");
				z--;
			}
			else if(z==0&&j>n+1-i)
			{
				printf("%d",--k);
			}
		}
		printf("\n");
		k=1;
	}
	
}
