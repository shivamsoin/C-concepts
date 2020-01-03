//Write a c program to find first occurence  of  a character  in  a given  string.
#include<stdio.h>
#include<string.h>
int main()
{
	char x,arr[100];
	int i=0,count=0,pos1=0;
	printf("Enter the string: ");
	gets(arr);
	printf("Enter the character to search: ");
	scanf("%c",&x);
	while(arr[i]!=0)
	{
		if(arr[i]==x)
		{
			count++;
		    if(count==1)
		    {
		    	pos1=i;
		    	break;
			}
            
		}
		i++;
	}
	if(count!=0)
	{
		printf("First occurence of the character is at the position:%d",pos1+1);
	}
	else
	printf("Character is not found");
}
