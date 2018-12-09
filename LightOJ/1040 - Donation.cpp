#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 55
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n;
int par[N];
struct edge
{
    int u,v,w;
    bool operator<(const edge &p)const
    {
        return w<p.w;
    }
};
vector<edge>vec;
void setpar()
{
    int i;
    rep0(i,n)
        par[i]=i;
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
int mst()
{
    int i,cost=0,cnt=0;
    sort(all(vec));
    setpar();
    rep0(i,vec.size())
    {
        int u=findpar(vec[i].u);
        int v=findpar(vec[i].v);
        if(u!=v)
        {
            par[u]=v;
            cost+=vec[i].w;
            cnt++;
            if(cnt==n-1)
                break;
        }
    }
    if(cnt==n-1)
        return cost;
    return -1;
}
int main()
{
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        sf(n);
        int i,j,sum=0,k;
        rep0(i,n)
        {
            rep0(j,n)
            {
                sf(k);
                if(k==0)
                    continue;
                if(i!=j)
                    vec.pb({i,j,k});
                sum+=k;
            }
        }
        int p=mst();
        if(p!=-1)
            p=sum-p;
        pf("Case %d: %d\n",t,p);
        vec.clear();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
