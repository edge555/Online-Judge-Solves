#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
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
#define N 1005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int par[N],rnk[N];
void reset(int n)
{
    int i;
    rep(i,n)
    {
        par[i]=i;
        rnk[i]=1;
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
        if(rnk[xx]>rnk[yy])
        {
            par[yy]=xx;
            rnk[xx]+=rnk[yy];
            rnk[yy]=0;
        }
        else
        {
            par[xx]=yy;
            rnk[yy]+=rnk[xx];
            rnk[xx]=0;
        }
    }
}
int main()
{
    int n,m,i,a,b;
    sff(n,m);
    reset(n);
    vector<int>vec;
    while(m--)
    {
        sff(a,b);
        dsu(a,b);
        vec.clear();
        rep(i,n)
        {
            if(rnk[i]!=0)
                vec.pb(rnk[i]);
        }
        sort(all(vec));
        rep0(i,vec.size())
        {
            pf("%d",vec[i]);
            if(i!=vec.size()-1)
                pf(" ");
        }
        puts("");
    }
}
