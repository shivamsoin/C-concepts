// calloc dyanamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int n,i;
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",p[i]);
	}
}
