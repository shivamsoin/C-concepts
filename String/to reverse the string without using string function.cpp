 // to reverse the string without using string function
#include<stdio.h>
#include<string.h>
int main()
{
	
	char c[100],temp;
	int i,j=0;
	gets(c);
	while(c[i]!='\0')
	{
		j++;
		i++;
	}
	i=0;
	while(j!=0)
	{
		temp=c[i];
		c[i]=c[j];
		c[j]=temp; 
		i++;
		j--;
		
	}
	printf("%s",c);
    
	
}
