// to copy the string into other using string function
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[100],arr2[100];
	gets(arr1);
    strcpy(arr2,arr1);
    printf("%s",arr2);
}
