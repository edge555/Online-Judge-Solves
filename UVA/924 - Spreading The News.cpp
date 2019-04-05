#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int n,level[N],freq[N];
bool vis[N];
vector<int>grid[N];
void reset()
{
    int i;
    rep0(i,n)
    {
        vis[i]=false;
        level[i]=0;
        freq[i]=0;
    }
}
void bfs(int s)
{
    reset();
    vis[s]=true;
    level[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int i,v,u=q.front();
        q.pop();
        rep0(i,grid[u].size())
        {
            v=grid[u][i];
            if(!vis[v])
            {
                vis[v]=true;
                level[v]=level[u]+1;
                freq[level[v]]++;
                q.push(v);
            }
        }
    }
}
int main()
{
    sf(n);
    int i,q,a,s;
    rep0(i,n)
    {
        sf(q);
        while(q--)
        {
            sf(a);
            grid[i].pb(a);
        }
    }
    sf(q);
    while(q--)
    {
        sf(s);
        bfs(s);
        int mx=0,last=-1,cur=0,cnt=0,p;
        rep0(i,n)
        {
            if(freq[i]>mx)
            {
                mx=freq[i];
                last=i;
            }
        }
        if(mx<1)
            puts("0");
        else
            pf("%d %d\n",mx,last);
    }
}
