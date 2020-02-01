/*
1
24
135
2468
13579
*/
#include<stdio.h>
int main()
{
    int i=0,j=0,n,k=2,x=1;
 	printf("Enter the number of rows");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		if(i%2==0)
 		{
 			for(j=1;j<=i;j++)
 			
 			{
 				printf("%d ",k);
 				k=k+2;
			 }
			 printf("\n");
			 k=2;
		 }
		 else
		 {
		 	for(j=1;j<=i;j++)
		 	{
		 		printf("%d ",x);
		 		x=x+2;
			 }
			 printf("\n");
			 x=1;
		 }
	 }
}
