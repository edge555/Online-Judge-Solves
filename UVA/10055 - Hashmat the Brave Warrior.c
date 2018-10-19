#include <stdio.h>
int main ()
{
    long long int a,b,c,d;

    while (scanf ("%lld %lld",&a,&b)!=EOF)
    {
        if (a<b || a==b)

            printf ("%lld\n",b-a);

        else if (a>b)

           printf ("%lld\n",a-b);
    }
    return 0;
}
