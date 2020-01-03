// to convert the string into lower case without using string function
#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	int i=0;
	gets(c);
	while(c[i]!='\0')
	{
		if(c[i]>=65&&c[i]<=90)
		{
			c[i]=c[i]+32;
		}
		i++;
	}
	printf("%s",c);
}
