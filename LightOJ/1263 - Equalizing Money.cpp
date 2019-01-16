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
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,color;
bool vis[N];
vector<int>money;
vector<int>grid[N],res[N];
set<int>st;
void reset()
{
    int i;
    rep(i,n)
    {
        grid[i].clear();
        res[i].clear();
        vis[i]=false;
    }
    money.clear();
    st.clear();
}
void dfs(int n)
{
    vis[n]=true;
    res[color].pb(money[n-1]);
    int i;
    rep0(i,grid[n].size())
    {
        int p=grid[n][i];
        if(!vis[p])
            dfs(p);
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
        ll sum=0;
        int i,j,k;
        rep0(i,n)
        {
            sf(k);
            money.pb(k);
            sum+=k;
        }
        bool chk=true;
        if(sum%n!=0)
            chk=false;
        int a,b;
        rep0(i,m)
        {
            sff(a,b);
            grid[a].pb(b);
            grid[b].pb(a);
        }
        pf("Case %d: ",t);
        if(!chk)
        {
            pf("No\n");
            continue;
        }
        color=0;
        rep(i,n)
        {
            if(!vis[i])
            {
                color++;
                dfs(i);
            }
        }
        chk=true;
        rep(i,color)
        {
            ll ans=0;
            if(res[i].size()==0)
                continue;
            rep0(j,res[i].size())
                ans+=res[i][j];
            if(ans%res[i].size()!=0)
            {
                chk=false;
                break;
            }
            st.insert(ans/res[i].size());
        }

        if(chk && st.size()==1)
            pf("Yes\n");
        else
            pf("No\n");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
