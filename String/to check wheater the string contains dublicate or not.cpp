// to check wheater the string contains dublicate or not
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	int i,j,x,count=0;
	gets(arr);
    x=strlen(arr);
    for(i=0;i<x;i++)
    {
    	for(j=i+1;j<x;j++)
    	{
    		if(arr[i]==arr[j]&&arr[i]!='\0')
    		{
    			count++;
			}
		}
	}
	if(count>=1)
	{
		printf("Strong contains dublicate ");
	}
	else
	printf("String does not contains dublicates");
}
