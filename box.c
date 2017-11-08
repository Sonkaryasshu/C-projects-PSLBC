#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a;
    printf("Enter number of rows:");
    scanf("%d",&a);
    printf("\n");
    for(i=0;i<a;i++)
    {
     for(j=0;j<a;j++)

     {
         if(j==0||j==a-1) printf("*");
         else if (i==0||i==a-1) printf("*");
         else printf(" ");

     }
         printf("\n");

    }
    return 0;
}
