// to find the dublicate elements from the string
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	int count=0,i,j,x;
	gets(arr);
	x=strlen(arr);
	for(i=0;i<x;i++)
	{
		count=1;
		for(j=i+1;j<x;j++)
		{
			if(arr[i]==arr[j]&&arr[i]!=' ')
			{
				count++;
				arr[j]=0;
			}
		}
		if(count>1&&arr[i]!=0)
		{
			printf("%c\n",arr[i]);
		}
	}
}
