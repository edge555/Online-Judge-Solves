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
#define N 10005
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
int rnk[N],par[N],i;
void makeset(int n)
{
    rep(i,n)
    {
        par[i]=i;
        rnk[i]=0;
    }
}
int findpar(int n)
{
    if(par[n]==n)
        return n;
    else
        return par[n]=findpar(par[n]);
}
void dsu(int x,int y)
{
    int xx=findpar(x),yy=findpar(y);
    if(xx!=yy)
    {
        if(rnk[xx]>rnk[yy])
            par[yy]=xx;
        else
        {
            par[xx]=yy;
            if(rnk[xx]==rnk[yy])
                rnk[yy]++;
        }
    }
}
int main()
{
    int n,m;
    sff(n,m);
    makeset(n);
    int i,a,b;
    rep0(i,m)
    {
        sff(a,b);
        dsu(a,b);
    }
    if(n!=m+1)
    {
        puts("NO");
        return 0;
    }
    set<int>st;
    rep(i,n)
    {
        int p=findpar(i);
        st.insert(p);
    }
    if(st.size()==1)
        pf("YES");
    else
        pf("NO");
}
