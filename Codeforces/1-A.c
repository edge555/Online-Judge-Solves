#include<stdio.h>
int main()
{
    long long int n,m,a,row,col;
    scanf("%lld %lld %lld",&n,&m,&a);
    if(a>=n && a>=m)
    {
        printf("1\n");
    }
    else
    {
        if(n%a==0)
            row=(n/a);
        if(m%a==0)
            col=(m/a);
        if(n%a!=0)
            row=(n/a)+1;
        if(m%a!=0)
            col=(m/a)+1;
        printf("%lld\n",(row*col));
    }
    return 0;
}
