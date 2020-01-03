// to copy string 1 to string 2 without using string function
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i=0;
	gets(str1);
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	printf("%s\n%s",str1,str2);
 } 
