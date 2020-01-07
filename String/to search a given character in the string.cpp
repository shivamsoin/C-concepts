// to search a given character in the string
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],x;
	int i=0,count=0;
	printf("Enter the string:");
	gets(a);
	printf("Enter the character:");
	scanf("%c",&x);
	while(a[i]!='\0')
	{
		if(a[i]==x)
		{
			count++;
			printf("%d ", i);
		}
		i++;
	}
	if(count==0)
	{
		printf("Character is not found");
	}
}

