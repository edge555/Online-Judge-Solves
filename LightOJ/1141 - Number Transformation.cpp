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
vector<int>fact[N];
vector<int>grid[N];
int cost[N];
bool vis[N];
void setvalue()
{
    int i;
    rep(i,N)
    {
        cost[i]=0;
        grid[i].clear();
        vis[i]=false;
    }
}
void primefact()
{
    int i,j,k;
    reps(k,2,1000)
    {
        int ind=k,n=k;
        int div=2,add=0;
        while(n>1)
        {
            add=0;
            while(n%div==0)
            {
                add=div;
                n/=div;
            }
            div++;
            if(add!=0)
                fact[ind].pb(add);
        }
        if(add==ind)
            fact[ind].clear();
    }
}
bool valid(int n)
{
    if(n>=1 && n<=1000 && !vis[n])
        return true;
    return false;
}
void bfs(int a,int b)
{
    cost[a]=0;
    vis[a]=true;
    queue<int>q;;
    q.push(a);
    int i;
    while(!q.empty())
    {
        int k=q.front();
        q.pop();
        rep0(i,fact[k].size())
        {
            int p=k+fact[k][i];
            if(valid(p))
            {
                vis[p]=true;
                cost[p]=cost[k]+1;
                q.push(p);
            }
        }
    }
}
int main()
{
    primefact();
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int a,b;
        sff(a,b);
        setvalue();
        bfs(a,b);
        pf("Case %d: ",t);
        if(!vis[b])
            pf("-1\n");
        else
            pf("%d\n",cost[b]);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
