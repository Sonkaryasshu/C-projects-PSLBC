#include<stdio.h>
 int main ()
 {
     int i,j,r,count=0;
     for(i=2;i<=1000;i++)
     {
         for(j=2;j<i;j++)
         {
             r=i%j;
             if(r==0) break;

             else count++;
         }
         if(count==i-2) printf("\n%d",i);
         count=0;
     }
return 0;

 }
