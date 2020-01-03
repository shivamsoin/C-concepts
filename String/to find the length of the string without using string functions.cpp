// to find the length of the string without using string functions
#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	int count,i=0;
	gets(c);
	while(c[i]!='\0')
	{
		
		count++;
		i++;
		
	}
	printf("%d",count);
	
}
