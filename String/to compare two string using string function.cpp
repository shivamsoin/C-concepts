// to compare two string using string function
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100],brr[100];
	int x;
	gets(arr);
	gets(brr);
	x=strcmp(arr,brr);
	printf("%d",x);
}
