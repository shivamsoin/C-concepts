// Q23 to display the largest  the  number among the 5 numbers
#include<stdio.h>
int main()
{
  int large=0,num,i=1;
  while(i<=5)
  {
  
  	printf("\n Enter the number");
  	scanf("%d",&num);
  	large=num>large?num:large;
  	i++;
  	
  }	
   printf("\n The largest number is %d",large);
   return 0;
}
