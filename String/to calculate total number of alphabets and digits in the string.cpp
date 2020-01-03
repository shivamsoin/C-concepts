// to calculate total number of alphabets and digits in the string
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,count=0,ccount=0;
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]>=65&&a[i]<=90|| a[i]>=97&&a[i]<=122)
		{
			count++;
		}
		else if(a[i]>=48&&a[i]<=57)
		{
			ccount++;
		}
		i++;
	}
	printf("number of alphabets:%d\lnnumber of digits:%d",count,ccount);
}
