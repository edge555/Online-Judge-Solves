#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
void knapsack(int W,int wt[],int val[],int n)
{
    int i,w,K[n+1][W+1];
    for (i=0;i<=n;i++)
    {
        for (w=0;w<=W;w++)
        {
            if (i==0 || w==0)
                K[i][w]=0;
            else if (wt[i-1]<=w)
                K[i][w]=max(val[i-1]+K[i-1][w-wt[i-1]],K[i-1][w]);
            else
                K[i][w]=K[i-1][w];
        }
    }
    rep0(i,W+1)
    {
        if(K[n][i]==K[n][W])
        {
            pf("%d %d\n",i,K[n][W]);
            return;
        }
    }
}
int main()
{
    int n,W,i,a,b;
    while(sff(W,n))
    {
        if(W+n==0)
            return 0;
        int wt[n+1],val[n+1];
        rep0(i,n)
        {
            sff(a,b);
            wt[i]=a;
            val[i]=b;
        }
        knapsack(W,wt,val,n);
    }
}
