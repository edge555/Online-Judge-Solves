#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f;
    while(scanf("%lld %lld %lld",&a,&b,&c)==3)
    {
    if(a==0 && b==0 && c==0)
        break;
    d=a*a;
    e=b*b;
    f=c*c;
    if(a!=0 || b!=0 || c!=0)
    {
    if(f==d+e||d==e+f||e==d+f)
        printf("right\n");
    else
        printf("wrong\n");
    }
    }
    return 0;
}
