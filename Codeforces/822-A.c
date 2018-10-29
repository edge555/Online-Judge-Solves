#include <stdio.h>
int main()
{
    long long int n1,n2,w=1,c;
    scanf("%lld %lld",&n1,&n2);
    c=(n1<n2)?n1:n2;

    while (c!=0)
    {
        w=w*c;
        c--;
    }
    printf ("%lld\n",w);
}
