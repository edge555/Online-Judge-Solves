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
#define N 1001
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
vector<int>grid[N];
vector<int>vec;
bool vis[N];
bool dfs(int n)
{
    int i;
    rep0(i,grid[n].size())
    {
        int k=grid[n][i];
        if(!vis[k])
            return false;
    }
    return true;
}
bool topsort()
{
    int ans=true,i;
    rep0(i,vec.size())
    {
        int k=vec[i];
        if(dfs(k))
            vis[k]=true;
        else
        {
            ans=false;
            break;
        }
    }
    return ans;
}
int main()
{
    sff(n,m);
    int i,a,b;
    rep0(i,m)
    {
        sff(a,b);
        grid[b].pb(a);
    }
    bool chk=true;
    rep0(i,n)
    {
        sf(a);
        vec.pb(a);
    }
    if(topsort())
        pf("YES");
    else
        pf("NO");
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
