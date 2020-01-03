// to count the blak space in the string
#include<stdio.h>
#include<string.h>
int main()
{
  char arr[100];
  int i,count;
  gets(arr);
  while(arr[i]!='\0')
  {
  	if(arr[i]==' ')
  	{
  		count++;
	  
	  }
	  i++;
   } 
   printf("%d",count);
}
