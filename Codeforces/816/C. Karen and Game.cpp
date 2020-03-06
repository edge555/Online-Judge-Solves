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
#define N 105
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
int ara[N][N];
int main()
{
    int i,j,n,m;
    sff(n,m);
    rep0(i,n)
    {
        rep0(j,m)
            sf(ara[i][j]);
    }
    queue<pi>q;
    if(n<=m)
    {
        int now=1;
        rep0(i,n)
        {
            int mn=INT_MAX;
            rep0(j,m)
                mn=min(mn,ara[i][j]);
            rep0(j,m)
                ara[i][j]-=mn;
            while(mn--)
                q.push({now,i});
        }
        now=2;
        rep0(j,m)
        {
            int mn=INT_MAX;
            rep0(i,n)
                mn=min(mn,ara[i][j]);
            rep0(i,n)
                ara[i][j]-=mn;
            while(mn--)
                q.push({now,j});
        }
    }
    else
    {
        int now=2;
        rep0(j,m)
        {
            int mn=INT_MAX;
            rep0(i,n)
                mn=min(mn,ara[i][j]);
            rep0(i,n)
                ara[i][j]-=mn;
            while(mn--)
                q.push({now,j});
        }
        now=1;
        rep0(i,n)
        {
            int mn=INT_MAX;
            rep0(j,m)
                mn=min(mn,ara[i][j]);
            rep0(j,m)
                ara[i][j]-=mn;
            while(mn--)
                q.push({now,i});
        }
    }
    rep0(i,n)
    {
        rep0(j,m)
        {
            if(ara[i][j])
            {
                puts("-1");
                return 0;
            }
        }
    }
    pf("%d\n",q.size());
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        if(p.fi==1)
            pf("row ");
        else
            pf("col ");
        pf("%d\n",p.se+1);
    }
}
