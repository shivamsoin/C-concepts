// to check wheater string is contain dublicate character or not
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100],temp[100]={0};
	int count=0,i;
	gets(arr);
	while(arr[i]!='\0')
	{
		temp[arr[i]]=temp[arr[i]]+1;
		i++;
	}
	while(temp[arr[i]]!='\0')
	{
		if(temp[arr[i]]>1)
		{
			printf("String contains dublicate character");
			count++;
			break;
		}
		i++;
		
	}
	if(count==0)
	{
		printf("String does not conain dubliate character");
	}
}
