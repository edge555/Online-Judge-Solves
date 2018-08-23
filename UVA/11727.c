#include <stdio.h>
int main ()
{
    int a, b, c,i=1,n,min;
    scanf ("%d",&n);

    while (i<=n)
    {

    scanf ("%d %d %d",&a,&b,&c);

    if ((a> b && a <c) || (a <b && a >c))
        min=a;
    else if ((b> a && b <c) || (b <a && b >c))
        min=b;
    else if ((c> a && c <b) || (c <a && c> b))
        min=c;
    printf ("Case %d: %d\n",i,min);
    i++;
    }
    return 0;
}
