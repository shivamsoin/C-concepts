// to swap two strings
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],c[100];
	int i=0,k=0,j=0;
	printf("Enter the string 1:");
	gets(a);
	printf("Enter the string 2:");
	gets(b);
	while(b[i]!='\0')
	{
	  c[k]=b[i];
	  k++;
	  i++;
	}
	c[k]='\0';
	i=0;
	while(b[j]!='\0')
	{
		b[j]=a[i];
		i++;
		j++;
	}
	b[j]='\0';
	k=0;
	j=0;
	while(c[k]!='\0')
	{
		a[j]=c[k];
		j++;
		k++;
		
	}
	a[i]='\0';
	printf("string 1 is:%s\n",a);
	printf("string 2 is:%s",b);
}
