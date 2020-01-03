// to scan a string and convert the vowels into upper case
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	int i;
	gets(arr);
	while(arr[i]!='\0')
	{
		if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
		{
			arr[i]=arr[i]-32;
		}
		i++;
	}
	printf("%s",arr);
}
