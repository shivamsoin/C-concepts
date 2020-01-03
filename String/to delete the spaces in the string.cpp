// to delete the spaces in the string
#include<string.h>
#include<stdio.h>
int main()
{
	char arr[100];
	int i,k;
	printf("Enter the string: ");
	gets(arr);
	while(arr[i]!='\0')
	{
		if(arr[i]==' ')
		{
			k=i;
			while(arr[k]!='\0')
			{
			arr[k]=arr[k+1];
			k++;
	    	}
		}
		i++;
	}
	printf("%s",arr);
}
