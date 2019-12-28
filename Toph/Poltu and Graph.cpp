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
#define N 200005
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
int n,m,par[N],ara[N],ans[N];
struct node
{
    int u,v,w;
};
struct query
{
    int v,x,ind;
};
vector<node>vec;
vector<query>vec2;
bool comp(node &a,node &b)
{
    return a.w<b.w;
}
bool comp2(query &a,query &b)
{
    return a.x<b.x;
}
void reset()
{
    int i;
    rep(i,n)
    {
        par[i]=i;
        ara[i]=1;
    }
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
int main()
{
    int i,u,v,w,q,x,j=0;
    sff(n,m);
    reset();
    rep0(i,m)
    {
        sfff(u,v,w);
        vec.pb({u,v,w});
    }
    sort(all(vec),comp);
    sf(q);
    rep0(i,q)
    {
        sff(v,x);
        vec2.pb({v,x,i});
    }
    sort(all(vec2),comp2);
    rep0(i,q)
    {
        query qr=vec2[i];
        x=qr.x;
        v=qr.v;
        while(j<m && vec[j].w<=x)
        {
            int uu=findpar(vec[j].u);
            int vv=findpar(vec[j].v);
            if(uu!=vv)
            {
                par[uu]=vv;
                ara[vv]+=ara[uu];
            }
            j++;
        }
        ans[qr.ind]=ara[findpar(v)];
    }
    rep0(i,q)
        pf("%d\n",ans[i]);
}
