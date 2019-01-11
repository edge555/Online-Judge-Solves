#include <stdio.h>
#include <string.h>
int main ()
{
    char ch[100];
    int i,j=0,n,m=0;
    scanf ("%d",&n);
    
    while (m<=n)
    {
        gets(ch);
        j=strlen(ch);
        if (j<=10)
            puts(ch);
        else if (j>10)
            printf ("%c%d%c\n",ch[0],j-2,ch[j-1]);
        m++;
    }
}
