// to concact two string using string function
#include<string.h>
#include<stdio.h>
int main()
{
	char arr[100],brr[100];
	gets(arr);
	gets(brr);
	strcat(arr,brr);
	printf("%s",arr);
}
