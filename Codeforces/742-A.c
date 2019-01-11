#include <stdio.h>
int main()
{
    long long int a,r;
    scanf ("%lld",&a);

    if (a==0)
        printf ("1\n");
    else
    {
    r=a%4;
    if (r==1)
        {printf ("8\n");
    if (r==2)
        printf ("4\n");
    if (r==3)
        {printf ("2\n");
    if (r==0)
        printf ("6\n");
    }
}
