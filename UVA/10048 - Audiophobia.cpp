#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sll(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 101
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define autto(vec) for(auto it=vec.begin();it!=vec.end();it++)
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,q;
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
    rep(i,n)
        par[i]=i;
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
int mst(int st,int en)
{
    setpar();
    int cost=-1,i;
    bool path=false;
    rep0(i,vec.size())
    {
        if(findpar(st)==findpar(en))
        {
            path=true;
            break;
        }
        int x=vec[i].u;
        int y=vec[i].v;
        int u=findpar(x);
        int v=findpar(y);
        if(u!=v)
        {
            par[v]=u;
            cost=max(cost,vec[i].w);
        }
    }
    if(!path)
        cost=-1;
    return cost;
}
int main()
{
    int tc=1;
    while(1)
    {
        sfff(n,m,q);
        if(n+m+q==0)
            return 0;
        int i,u,v,w;
        vec.clear();
        rep0(i,m)
        {
            sfff(u,v,w);
            vec.pb({u,v,w});
            vec.pb({v,u,w});
        }
        sort(all(vec));
        if(tc!=1)
            puts("");
        pf("Case #%d\n",tc++);
        while(q--)
        {
            sff(u,v);
            int k=mst(u,v);
            if(k==-1)
                puts("no path");
            else
                pf("%d\n",k);
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
