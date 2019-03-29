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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
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
int n,m;
bool vis[N];
vector<int>grid[N];
priority_queue<int,vector<int>,greater<int> >pq;
void bfs()
{
    pq.push(1);
    vis[1]=true;
    while(!pq.empty())
    {
        int i,k=pq.top();
        pq.pop();
        vis[k]=true;
        pf("%d ",k);
        rep0(i,grid[k].size())
        {
            int p=grid[k][i];
            if(!vis[p])
            {
                pq.push(p);
                vis[p]=true;
            }
        }
    }
}
int main()
{
    sff(n,m);
    int i,a,b;
    rep0(i,m)
    {
        sff(a,b);
        grid[a].pb(b);
        grid[b].pb(a);
    }
    memb(vis);
    bfs();
}
