#include <stdio.h>
#include <string.h>

void u(char s1[],char s2[])
{
    int i,j,x,len1,len2,n,flag=0;
    len1=strlen(s1);
    len2=strlen(s2);
    n=len1+len2;
    x=0;
    char s[1000];
    for(i=0;i<n;i++)
    {
       if(i<len1)
          s[i]=s1[i];
       else if(i>=len1)
       {
            flag=0;
         for(j=0;j<len1;j++)
         {
           if(s2[x-len1]==s1[j])
           {
               flag=1;
               break;
           }
         }
         if(flag==1)
         {
               n--;
               i--;
         }
        else
           s[i]=s2[x-len1];
        }
      x++;
    }
    printf("Union of set1 and set 2 is:");
    puts(s);
}

int main()
{
    char s1[50],s2[50];
    printf("Enter elements of set1 'WITHOUT SPACE':");
    gets(s1);
    printf("Enter elements of set2 'WITHOUT SPACE':");
    gets(s2);
    u(s1,s2);
    return 0;
}
