#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,j=1;
   printf("Please enter number of rows");
   scanf("%d",&n);
   while(j<=n)
   {
       int i=n-j,a=j-1;
    while(a>0)
    {
        printf(" ");
        a--;
    }
    while(i>0)
    {
        printf("* ");
        i--;
    }
    printf("\n");
    j++;
   }
    return 0;
}
