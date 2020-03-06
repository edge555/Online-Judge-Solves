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
#define N 2005
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
int n,m;
int u[N][N],d[N][N],l[N][N],r[N][N];
string a[N];
int main()
{
    int i,j;
    cin>>n>>m;
    rep0(i,n)
        cin>>a[i];
    rep0(i,n)
    {
        int now=0;
        rep0(j,m)
        {
            if(a[i][j]=='#')
                now=0;
            else
                r[i][j]=++now;
        }
    }
    rep0(i,n)
    {
        int now=0;
        for(j=m-1;j>=0;j--)
        {
            if(a[i][j]=='#')
                now=0;
            else
                l[i][j]=++now;
        }
    }
    rep0(i,m)
    {
        int now=0;
        rep0(j,n)
        {
            if(a[j][i]=='#')
                now=0;
            else
                d[j][i]=++now;
        }
    }
    rep0(i,m)
    {
        int now=0;
        for(j=n-1;j>=0;j--)
        {
            if(a[j][i]=='#')
                now=0;
            else
                u[j][i]=++now;
        }
    }
    int mx=0;
    rep0(i,n)
    {
        rep0(j,m)
            mx=max(mx,u[i][j]+d[i][j]+l[i][j]+r[i][j]-3);
    }
    pf("%d",mx);
}
