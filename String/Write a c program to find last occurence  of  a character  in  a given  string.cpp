// Write a c program to find last occurence  of  a character  in  a given  string
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100],x;
	int i=0,count=0,pos1,pos2;
	printf("Enter the string :");
	gets(arr);
	printf("Enter a character to search:");
	scanf("%c",&x);
	while(arr[i]!='\0')
	{
		if(arr[i]==x)
		{
		  count++;
		  if(count==1)
		  {
		  	pos1=i+1;
		  	pos2=i+1;
		  }	
			pos2=i+1;
		}
		i++;
	}
	 printf("first occurence:%d\nLast occurence:%d",pos1,pos2);
	 
}
