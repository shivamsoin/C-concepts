//wap to print all alphabets from a to z
#include<stdio.h>
int main()
{
	char i='a',x='A';
	while(i<='z')
	{
		printf("%c",i);
		i++;
	}
	while(x<='Z')
	{
		printf("%c",x);
		x++;
	}
	return 0;
}
