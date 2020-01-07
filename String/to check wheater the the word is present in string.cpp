// to check wheater the the word is present in string 
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i=0,j=0,x,time=0;
    printf("Enter the string:");
    gets(a);
    printf("Enter the word for searching:");
    gets(b);
    x=strlen(b);
    while(a[i]!='\0')
    {
    	if(a[i]==b[j])
    	{
    		while(a[i]==b[j]&&a[i]!='\0')
    		{
    			i++;
    			j++;
			}
			if(j=x&&(a[i]==' '||a[i]!='\0'))
			{
				time++;
			}
		}
		else
		{
			while(a[i]!=' ')
			{
				i++;
				if(a[i]!='\0')
				{
					break;
				}
			}
		}
		i++;
		j=0;
	}
	if(time>0)
	{
		printf("'%s' appears in string %d times",b,time);
	}
	else
	{
		printf("Word cannot be found in the string");
	}
}
