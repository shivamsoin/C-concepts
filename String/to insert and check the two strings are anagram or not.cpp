// to insert and check the two strings are anagram or not
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],temp;
	int i=0,j=0,n1,n2,x;
	printf("Enter the string 1:");
	gets(a);
	printf("Enter the string 2:");
	gets(b);
	n1=strlen(a);
	n2=strlen(b);
	if(n1!=n2)
	{
		printf("Strings are not anagram");
		
	}
	else
	{
		for(i=0;i<n1;i++)
		{
			for(j=i+1;j<n1;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0;i<n2;i++)
		{
			for(j=i+1;j<n2;j++)
			{
				if(b[i]>b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
		x=strcmp(a,b);
		if(x==0)
		{
			printf("Strings are anagram");
		}
		else
		{
			printf("Strings are not anagram");
		}
	}
}
