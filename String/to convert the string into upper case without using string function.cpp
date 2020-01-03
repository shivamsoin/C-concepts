// to convert the string into upper case without using string function
#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	int i=0;
	gets(c);
	while(c[i]!='\0')
	{
		if(c[i]>=97&&c[i]<=122)
		{
			c[i]=c[i]-32;
		}
		i++;
	}
	printf("%s",c);
}
