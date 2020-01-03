// to find the character whoes have lowest frequency in the string
#include<stdio.h>
#include<string.h>
int temp[100]={0};
int main()
{
	char a[1000],ab;
	int i=0,small=999;
	printf("Enter the string:");
	gets(a);
	while(a[i]!='\0')
	{
		temp[a[i]]=temp[a[i]]+1;
		i++;
	}
	i=0;
	while(a[i]!='\0')
	{
		if(temp[a[i]]<=small+1)
		{
			
			small=temp[a[i]];
			ab=a[i];
			
			
		}
		temp[a[i]]=0;
		i++;
	}
	printf("%c",ab);
	
}
