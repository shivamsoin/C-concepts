// to reverse the words of the string
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100],brr[100];
	int i,x,j,z=0,k;
	gets(arr);
	x=strlen(arr);
	i=x-1;
	j=x-1;
	
	while(arr[i]>0)
	{
		if(arr[i]==' ')
		{
			k=i+1;
			while(k<=j)
			{
				brr[z]=arr[k];
				z++;
				k++;
			}
			brr[z++]=' ';
			j=i-1;
			
		}
		i--;
	}
	for(k=0;k<j;k++)
	{
		brr[z]=arr[k];
		z++;
	}
	
	brr[z]='\0';
	printf("Original string: %s\n Reversed string: %s",arr,brr);
	
}
