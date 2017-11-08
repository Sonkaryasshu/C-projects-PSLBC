#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str[50];

void palindrome(int x)
{   itoa(x,str,10);
    int l=strlen(str),count=0,i=0;
    for(i=0;i<(l/2);i++)
    {
      if(str[i]==str[l-i-1]) count++;
      else break;
    }
    if(count==(l/2))
        puts(str);

}

int main()
{   int a,b,temp;
    printf("Please enter a range to get palindrome numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
       temp=a;
       a=b;
       b=temp;
    }
    if(a<10)a=10;
    for(;a<=b;a++)
    {
        palindrome(a);
    }
    return 0;
}
