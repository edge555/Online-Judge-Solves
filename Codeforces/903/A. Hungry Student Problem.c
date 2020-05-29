#include <stdio.h>
int main ()
{
    int i,n,a;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a);
        if (a==1 || a==2 || a==4 || a==5 || a==8 || a==11)
            printf ("NO\n");
        else
            printf ("YES\n");    
    }
}
