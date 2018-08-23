#include <stdio.h>
int main ()
{
    int a,b,m,r;

    scanf ("%d %d",&a,&b);
        m=a-b;
        r=m%10;
        if (r==9)
            m--;
        else
            m++;

    printf ("%d\n",m);
return 0;
}
