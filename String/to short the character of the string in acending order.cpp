 // to short the character of the string in acending order
 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char arr[100],temp;
 	int x,j=0,i=0;
 	 printf("Enter the string:");
 	 gets(arr);
 	 x=strlen(arr);
 	 for(i=0;i<x-1;i++)
 	 {
 	 	for(j=i+1;j<x;j++)
 	 	{
 	 		if(arr[i]>arr[j])
 	 		{
 	 			temp=arr[i];
 	 			arr[i]=arr[j];
 	 			arr[j]=temp;
			  }
		  }
	  }
	  printf("String after shorting:%s",arr);
 }
