#include<stdio.h>
int main()
{   printf("YASHWANT KUMAR SONKAR 16115090  CSE 3rd SEM");
   float  u;
   printf("enter the unit =");
   scanf("%f",&u);
   if(u<=50)
   printf("your bill=%f",u*0.5);
   else if(u<=150)
   printf("your bill=%f",25+(u-50)*0.75);
    else if(u<=250)
   printf("your bill=%f",100+(u-150)*1.2);
    else if(u>250)
   printf("your bill=%f",220+(u-250)*1.5);
   else
   printf("error");


   return 0;
}
