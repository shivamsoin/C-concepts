// to count vowels in the string
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	int count=0,i=0;
	gets(arr);
	strlwr(arr);
	while(arr[i]!='\0')
	{
		if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("%d",count);
}
