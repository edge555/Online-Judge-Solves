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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,q;
int par[N],rnk[N];
void makeset()
{
    int i;
    rep(i,n)
    {
        par[i]=i;
        rnk[i]=0;
    }
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
void dsu(int x,int y)
{
    int xx=findpar(x);
    int yy=findpar(y);
    if(xx!=yy)
    {
        if(rnk[xx]>rnk[yy])
            par[yy]=xx;
        else
        {
            par[xx]=yy;
            if(rnk[yy]==rnk[xx])
                rnk[yy]++;
        }
    }
}
int main()
{
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        sfff(n,m,q);
        makeset();
        int a,b;
        while(m--)
        {
            sff(a,b);
            dsu(a,b);
        }
        pf("Case %d:\n",t);
        while(q--)
        {
            sff(a,b);
            int u=findpar(a);
            int v=findpar(b);
            if(u==v)
                pf("Chicken dinner coming soon!\n");
            else
                pf("Eat vegetables!\n");
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
