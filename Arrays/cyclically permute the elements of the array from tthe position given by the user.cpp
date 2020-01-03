// rotation of the array from the position given by the user
#include<stdio.h>
int main()
{

  int i,b[100],arr[100],SIZE,N;
  printf("Enter the size of the array");
  scanf("%d",&SIZE);
  printf("Enter the elements of the array");
  for(i=0;i<SIZE;i++)
  {
  	scanf("%d",&arr[i]);
  }
  printf("Enter the position");
  scanf("%d",&N);
  
  for(i=0;i<SIZE;i++)
  {
  	b[i]=arr[i];
  }
  
  for(i=0;i<SIZE-N;i++)
  {
  	arr[i]=arr[i+N];
  }
  for(i=0;i<N;i++)
  {
  	arr[i+SIZE-N]=b[i];
  	
}
for(i=0;i<SIZE;i++)
{
	printf("%d ",arr[i]);
}
}
