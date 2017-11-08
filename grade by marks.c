#include <stdio.h>
#include <stdlib.h>

int main()
{    printf("YASHWANT KUMAR SONKAR 16115090  CSE 3rd SEM");
     float per,sb1,sb2,sb3,sb4,sb5;
     int n;
     printf("enter marks of five subjects out of 100\n");
     scanf("%f%f%f%f%f",&sb1,&sb2,&sb3,&sb4,&sb5);
     per=(sb1+sb2+sb3+sb4+sb5)/5;
     printf("percent =%f\n",per);
     n=per/10;
     switch(n)
     {
         case 10:
         case 9:printf("your grade is A");break;
         case 8:printf("your grade is B");break;
         case 7:printf("your grade is C");break;
         case 6:printf("your grade is D");break;
         case 5:
         case 4:printf("your grade is E");break;
         default: printf("your grade is F");
     }


    return 0;
}
