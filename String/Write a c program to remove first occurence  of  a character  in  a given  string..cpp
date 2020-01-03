// Write a c program to remove first occurence  of  a character  in  a given  string.
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],x;
	int i=0,count=0,pos1 ;
	printf("Enter the string:");
	gets(a);
	printf("Enter the character:");
	scanf("%c",&x);
	//x=strlen(a);
	while(a[i]!='\0')
	{
		if(a[i]==x)
		{
			count++;
			if(count==1)
			{
				pos1=i;
			}
		}
		i++;
	}
	i=pos1;
	if(count!=0)
	{
		
		while(a[i]!='\0')
		{
			a[i]=a[i+1];
			i++;
		}
		printf("%s",a);
	}
	else if(count==0)
	{
		printf("Character is not found");
	}
}
