#include <bits/stdc++.h>

#define sf(n) scanf("%d",&n)
#define sff(n,m) scanf ("%d %d",&n,&m)
#define sfff(n,m,o) scanf ("%d %d %d",&n,&m,&o)
#define pf printf
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
int ara[1000001];
using namespace std;
int main()
{
    int n=1000001,mx=0,i,p,j;
    rep(i,n)
    {
        int num=i,cnt=0;
        if(num%2==0)
        {
            for(j=1;j<=sqrt(num);j++)
            {
                if(num%j==0)
                {
                    p=num/j;
                    if(p!=j)
                        cnt+=2;
                    else
                        cnt++;
                }
            }
        }
        else
        {
            for(j=1;j<=sqrt(num);j+=2)
            {
                if(num%j==0)
                {
                    p=num/j;
                    if(p!=j)
                        cnt+=2;
                    else
                        cnt++;
                }
            }
        }
        if(cnt>=mx)
        {
            mx=cnt;
            ara[i]=num;
        }
        else
            ara[i]=ara[i-1];
    }
    int tc;
    sf(tc);
    while(tc--)
    {
        sf(n);
        pf("%d\n",ara[n]);
    }
}
