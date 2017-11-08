#include <stdio.h>
#include <stdlib.h>

int main()
{    printf("YASHWANT KUMAR SONKAR 16115090  CSE 3rd SEM");
    float  bs;
    printf("enter the value of BS\n");
    scanf("%f",&bs);
    if(bs<=10000)printf("gross salary=%f",bs*2);
    else if(bs<=20000)printf("gross salary=%f",bs*2.15);
    else if(bs>20000)printf("gross salary=%f",bs*2.25);
    else printf("wrong entry");
    return 0;
}
