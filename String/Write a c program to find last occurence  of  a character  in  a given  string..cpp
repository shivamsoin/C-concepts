// Write a c program to find last occurence  of  a character  in  a given  string.
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100],x;
	int count=0,i=0,pos1=0;
	printf("Enter the string:");
	gets(arr);
	printf("Enter the character:");
	scanf("%c",&x);
	while(arr[i]!='\0')
	{
		if(arr[i]==x)
		{
			count++;
			pos1=i;
		}
		i++;
	}
	if(count!=0)
	{
		printf("Last occurence of the character is at:%d",pos1+1);
		
	}
	else
	{
		printf("Character is not found");
	}
}
