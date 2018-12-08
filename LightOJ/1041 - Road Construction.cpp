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
map<string,int>mp;
int par[N];
int cost;
struct edge
{
    int u,v,w;
    bool operator<(const edge &p)const
    {
        return w<p.w;
    }
};
void makeset(int n)
{
    int i;
    rep(i,n)
        par[i]=i;
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
vector<edge>vec;
bool mst()
{
    int i,cnt=0;
    sort(all(vec));
    rep0(i,vec.size())
    {
        int u=findpar(vec[i].u);
        int v=findpar(vec[i].v);
        if(u!=v)
        {
            par[u]=v;
            cost+=vec[i].w;
        }
    }
    bool connected=true;
    int p=findpar(1);
    reps(i,2,mp.size())
    {
        if(findpar(i)!=p)
        {
            connected=false;
            break;
        }
    }
    if(connected)
        return true;
    return false;
}
int main()
{
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        int ind=0,i,m,w;
        cin>>m;
        rep0(i,m)
        {
            string a,b;
            cin>>a>>b>>w;
            if(mp.find(a)==mp.end())
            {
                ++ind;
                mp[a]=ind;

            }
            if(mp.find(b)==mp.end())
            {
                ++ind;
                mp[b]=ind;

            }
            int u=mp[a],v=mp[b];
            vec.pb({u,v,w});
        }
        makeset(ind);
        cost=0;
        pf("Case %d: ",t);
        if(mst())
            pf("%d\n",cost);
        else
            pf("Impossible\n");

        mp.clear();
        vec.clear();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
