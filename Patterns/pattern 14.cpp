/*
55555
54444
54333
54322
54321

*/
#include<stdio.h>
int main()
{
	int i,j,k,z;
	for(i=1;i<=5;i++)
	{
		z=5;
		for(j=1;j<=i;j++)
		{
			printf("%d",z);
			z--;
		}
		z=z+1;
		for(k=4;k>=i;k--)
		{
			printf("%d",z);
		}
		printf("\n");
	}
	return 0;
}
