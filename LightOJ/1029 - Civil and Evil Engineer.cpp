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
    rep0(i,n+1)
        par[i]=i;
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
int minst()
{
    setpar();
    int cost=0,i,cnt=0;
    rep0(i,vec.size())
    {
        int u=findpar(vec[i].u);
        int v=findpar(vec[i].v);
        if(u!=v)
        {
            par[u]=v;
            cost+=vec[i].w;
            cnt++;
            if(cnt==n)
                break;
        }
    }
    return cost;
}
int maxst()
{
    setpar();
    int cost=0,i,cnt=0;
    for(i=vec.size()-1;i>=0;i--)
    {
        int u=findpar(vec[i].u);
        int v=findpar(vec[i].v);
        if(u!=v)
        {
            par[u]=v;
            cost+=vec[i].w;
            cnt++;
            if(cnt==n)
                break;
        }
    }
    return cost;
}

int main()
{
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        sf(n);
        int i,u,v,w;
        while(1)
        {
            sfff(u,v,w);
            if(u+v+w==0)
                break;
            vec.pb({u,v,w});
        }
        sort(all(vec));
        int cost=minst();
        cost+=maxst();
        pf("Case %d: ",t);
        if(cost%2==0)
            pf("%d\n",cost/2);
        else
            pf("%d/2\n",cost);
        vec.clear();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
