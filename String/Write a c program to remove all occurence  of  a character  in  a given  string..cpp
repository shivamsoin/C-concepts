// Write a c program to remove all occurence  of  a character  in  a given  string.
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],x;
	int i,j=0,count=0;
	printf("Enter the string:");
	gets(a);
	printf("Enter the character:");
	scanf("%c",&x);
	while(a[i]!='\0')
	{
		if(a[i]==x)
		{
			count++;
			j=i;
			while(a[i]!='\0')
			{
				a[i]=a[i+1];
				i++;
			}
			i=j;
		}
		i++;
	}
	if(count!=0)
	{
	printf("%s",a);
    }
    else if(count==0)
    {
    	printf("Character is not found");
	}
}
