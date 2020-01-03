// Write a c program to find lowest  frequency character  in  a given  string.
#include<string.h>
#include<stdio.h>
int temp[1000]={0};
int main()
{	char arr[100],ab;
	int i=0,small=99;
	printf("Enter the string:");
	gets(arr);
	while(arr[i]!='\0')
	{
		temp[arr[i]]=temp[arr[i]]+1;
		i++;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
  while(arr[i]!='\0')
  {
    if(temp[arr[i]]<small)
    {
      small=temp[arr[i]];
      printf("%d %c",temp[arr[i]],arr[i]);
      temp[arr[i]]=0;
      ab=arr[i];
    }    i++;
}
printf("%c",ab);
}

