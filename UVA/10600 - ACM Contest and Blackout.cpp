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
#define N 105
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m;
int par[N];
vector<int>ans;
struct edge
{
    int u,v,w;
    bool taken;
    bool operator<(const edge &p)const
    {
        return w<p.w;
    }
};
vector<edge>vec;
void setpar()
{
    int i;
    rep(i,n)
        par[i]=i;
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
int mst()
{
    int cost=0,i,cnt=0;
    setpar();
    sort(all(vec));
    rep0(i,vec.size())
    {
        int u=findpar(vec[i].u);
        int v=findpar(vec[i].v);
        if(u!=v)
        {
            par[u]=v;
            cost+=vec[i].w;
            vec[i].taken=true;
        }
    }
    return cost;
}
void secondmst()
{
    int i,j;
    rep0(i,vec.size())
    {
        if(vec[i].taken==true)
        {
            setpar();
            int temp=vec[i].w,cost=0,cnt=0;
            vec[i].w=INT_MAX;
            rep0(j,vec.size())
            {
                int u=findpar(vec[j].u);
                int v=findpar(vec[j].v);
                if(u!=v && vec[j].w!=INT_MAX)
                {
                    par[u]=v;
                    cost+=vec[j].w;
                    cnt++;
                }
            }
            if(cnt==n-1)
                ans.pb(cost);
            vec[i].w=temp;
        }
    }
}
int main()
{
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        vec.clear();
        sff(n,m);
        int i,u,v,w;
        rep0(i,m)
        {
            sfff(u,v,w);
            vec.pb({u,v,w,false});
        }
        int cost=mst();
        secondmst();
        sort(all(ans));
        pf("%d %d\n",cost,ans[0]);
        ans.clear();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
