// scan the sentence and count the word in the sentence
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	int i,count=1;
	gets(arr);
	while(arr[i]!='\0')
	{
		if(arr[i]==' '&&arr[i+1]!=' ')
		{
			count++;
		}
		i++;
	}
	printf("%d",count);
}
