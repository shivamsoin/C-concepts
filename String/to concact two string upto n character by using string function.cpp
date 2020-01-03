// to concact two string upto n character by using string function
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100],brr[100];
	int n;
	gets(arr);
	gets(brr);
	scanf("%d",&n);
	strncat(arr,brr,n);
	printf("%s",arr);
}
