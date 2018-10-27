#include<stdio.h>
int main ()
{
    int a,b,n,tests=1;
    while(scanf("%d",&n)==1)
    {
        if(n<0)
            break;
        a=1;
        b=0;
        while(a<n)
        {
            a=a+a;
            b++;
        }
        printf("Case %d: %d\n",tests,b);
         tests++;
    }
    return 0;
}
