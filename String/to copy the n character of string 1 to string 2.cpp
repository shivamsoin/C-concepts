// to copy the n character of string 1 to string 2
#include<string.h>
#include<stdio.h>
int main()
{
	char arr[100],brr[100];
	int n;
	gets(arr);
	scanf("%d",&n);
	strncpy(brr,arr,n);
	printf("%s",brr);
}
