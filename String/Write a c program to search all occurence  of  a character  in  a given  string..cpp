// Write a c program to search all occurence  of  a character  in  a given  string.
#include<stdio.h>
#include<string.h>
int temp[100]={0};
int main()
{
	char arr[100];
	int i=0;
	printf("enter the string");
	gets(arr);
	while(arr[i]!='\0')
	{
		temp[arr[i]]=temp[arr[i]]+1;
		i++;
	}
	i=0;
	while(arr[i]!='\0')
	{
		if(temp[arr[i]]>=1)
		{
			printf("%d:%c\n ",temp[arr[i]],arr[i]);
			temp[arr[i]]=0;
		}
		i++;
	}
}
