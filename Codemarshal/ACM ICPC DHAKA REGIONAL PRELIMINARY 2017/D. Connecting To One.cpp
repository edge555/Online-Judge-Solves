#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 40001
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<long long int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int n,m,freq[N],ans[100001],par[N];
struct node
{
    ll u,v,w;
}ara[150001];
bool comp(node a,node b)
{
    return a.w>b.w;
}
bool comp2(pi a,pi b)
{
    return a.fi>b.fi;
}
void reset()
{
    int i;
    rep(i,n)
    {
        par[i]=i;
        freq[i]=1;
    }
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
void dsu(int x,int y)
{
    int xx=findpar(x),yy=findpar(y);
    if(xx!=yy)
    {
        par[yy]=xx;
        freq[xx]+=freq[yy];
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        reset();
        ll i,j,u,v,w;
        rep0(i,m)
        {
            slll(u,v,w);
            node nd;
            nd.u=u;
            nd.v=v;
            nd.w=w;
            ara[i]=nd;
        }
        sort(ara,ara+m,comp);
        int q;
        vector<pi>vec,vec2;
        sf(q);
        rep0(i,q)
        {
            sl(w);
            vec.pb({w,i});
        }
        i=0;
        sort(all(vec),comp2);
        rep0(j,q)
        {
            ll now=vec[j].fi;
            while(ara[i].w>=now && i<m)
            {
                dsu(ara[i].u,ara[i].v);
                i++;
            }
            int x=findpar(1);
            ans[vec[j].se]=freq[x];
        }
        pf("Case %d:\n",t);
        rep0(i,q)
            pf("%d\n",ans[i]-1);
    }
}
