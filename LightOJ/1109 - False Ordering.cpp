#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define N 1001
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int ara[N];
bool mark[N];
void seive()
{
    int i,j;
    memset(mark,true,sizeof(mark));

    for(i=4;i<N;i+=2)
        mark[i]=false;

    for(i=3;i*i<N;i++)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
}
bool func(int x,int y)
{
    if(ara[x]==ara[y])
        return y<x;
    return ara[x]<ara[y];
}
int main()
{
    seive();
    int i,j;
    ara[1]=1;
    for (i=2;i<N;i++)
    {
       int cnt=0;
       if(mark[i]==true)
            ara[i]=2;
       else
       {
           for (j=2;j<=i/2;j++)
           {
               if(i%j==0)
                cnt++;
           }
           cnt+=2;
           ara[i]=cnt;
       }
    }
    int ara2[N];
    for (i=1;i<N;i++)
        ara2[i]=i;
    sort(ara2+1,ara2+1001,func);
    int tc,k,n;
    sf(tc);
    for (k=1;k<=tc;k++)
    {
        sf(n);
        pf("Case %d: %d\n",k,ara2[n]);
    }
}
