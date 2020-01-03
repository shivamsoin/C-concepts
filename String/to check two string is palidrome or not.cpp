// to check two string is palidrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100],brr[100];
	int i,x,count=0;
	gets(arr);
	x=strlen(arr);
	strcpy(brr,arr);
	strrev(arr);
	while(arr[i]!='\0')
	{
		if(arr[i]==brr[i])
		{
			count++;
		}
		i++;
	}
	if(count==x)
	{
		printf("String is palidrome");
	}
	else
	{
		printf("String is not palidrome");
	}
}
