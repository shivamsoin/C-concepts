// Write a c program to find highest  frequency character  in  a given  string.
#include<string.h>
#include<stdio.h>
int temp[100]={0};
int main()
{
	char arr[100],ab;
	int i=0,large=0;
	printf("Enter the string:");
	gets(arr);
	while(arr[i]!='\0')
	{
		temp[arr[i]]=temp[arr[i]]+1;
		i++;
	}
	i=0;
  while(arr[i]!='\0')
  {
    if(temp[arr[i]]>large)
    {
      large=temp[arr[i]];
      temp[arr[i]]=0;
      ab=arr[i];
    }
    i++;
}
printf("%c",ab);
}

