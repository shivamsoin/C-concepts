// C Program to Calculate Sum & Average of an Array
#include<stdio.h>
int main()
{
	int a[100],n,i,c=0;
	printf("Enter the array and press n to submit the array");
	while(1)
	{
		 scanf("%d",&a[i]);
		 if(a[i]==n)
		 {
		 	break;
		 }
		 
		 c++;
	}
	printf("\n\n\n");
	for(i=0;i<=c;i++)
	{
		printf("Your number is: %d\n",a[i]);
	}
}
