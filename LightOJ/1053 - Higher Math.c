#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f;
    int n,i,j;
    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        d=a*a;
        e=b*b;
        f=c*c;
        if(f==d+e||d==e+f||e==d+f)
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
}
