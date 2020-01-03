// to remove to last occurence of the character in the string
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],x;
	int i,pos1,count=0;
	printf("Enter the string:");
	gets(a);
	printf("Enter the character:");
	scanf("%c",&x);
	while(a[i]!='\0')
	{
       if(a[i]==x)
       {
       	count++;
       	pos1=i;
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
		printf("character is not found");
	}
}
