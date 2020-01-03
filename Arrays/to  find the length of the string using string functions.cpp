// to  find the length of the string using string functions
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	int x;
	printf("Enter the string");
	gets(arr);
	x=strlen(arr);
	printf("%d",x);
}

