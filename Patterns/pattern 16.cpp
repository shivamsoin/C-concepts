/*

12345
23451
34521
45321
54321
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,z,k,t;
    for(i=1;i<=5;i++)
    {
        z=i;

        for(j=1;j<=5;j++)
        {
            if(i+j<=6)
            {
                printf("%d",i+j-1);
            }
         if(i+j>6)
{
    for(k=2;k<=i;k++)
                   {

                       z--;
                       if(z>0)
                       {


                       printf("%d",z);
                       }


        }
}
}
        printf("\n");
}
return 0;
}





