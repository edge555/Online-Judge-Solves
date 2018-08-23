#include <stdio.h>
int main ()
{
    int n,ara[1000],cnt,i;
    while ((scanf ("%d",&n))!=EOF)
    {
        for (i=0,cnt=0;i<5;i++)
        {
            scanf ("%d",&ara[i]);
            if (ara[i]==n)
                cnt++;
        }
        printf ("%d\n",cnt);
    }
return 0;
}
