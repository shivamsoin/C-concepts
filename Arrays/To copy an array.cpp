// To copy an array
#include<stdio.h>
int main()
{
 int i,a[10],b[10];
 for(i=0;i<10;i++)
 {
 	scanf("%d",&a[i]);
  } 
   for(i=0;i<10;i++)
 {
    b[i]=a[i];
  }
   for(i=0;i<10;i++)
 {
 	printf("%d",a[i]);
  }
}
