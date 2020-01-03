// there are 6 boys and girls in the company now find the averafe of there salary where boys salary is odd number and girl have even no
 #include<stdio.h>
 int main()
 {
 	int a[100],i,sum,ssum,count=0,ccount=0;
 	float avg,aavg;
 	for(i=0;i<6;i++)
 	{
 		scanf("%d",&a[i]);
 		if(a[i]%2==0)
 		{
 			sum=sum+a[i];
 			count++;
		 }
		 else
		 {
		 	ssum=ssum+a[i];
		 	ccount++;
		 }
	 }
	 avg=sum/count;
	 aavg=ssum/ccount;
	 printf("Average of boys salary is:%.2f\nAverage of girls salary is:%.2f",avg,aavg);
}

