// to form 3X3 matrix
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("ENTER THE NUMBER");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	printf("THE REQURIED MATRIX IS:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
