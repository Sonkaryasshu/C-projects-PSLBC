#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,j=1;
   printf("Please enter number of rows");
   scanf("%d",&n);
   while(j<=n)
   {
       int i=0,a=n-j;
    while(a>0)
    {
        printf(" ");
        a=a-1;
    }
    while(i<j)
    {
        printf("* ");
        i++;
    }
    printf("\n");
    j++;
   }
    return 0;
}
