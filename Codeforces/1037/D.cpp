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
#define N 200005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<string,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
vector<int>grid[N];
bool vis[N],ans;
int par[N],cost[N],level[N];
int child[N],cnt,mx;
void bfs()
{
    vis[1]=true;
    cost[1]=1;
    queue<int>q;
    q.push(1);
    while(!q.empty())
    {
        int i,k=q.front();
        q.pop();
        rep0(i,grid[k].size())
        {
            int p=grid[k][i];
            if(!vis[p])
            {
                vis[p]=true;
                cost[p]=cost[k]+1;
                q.push(p);
                par[p]=k;
                level[cost[p]]++;
                child[k]++;
                mx=max(mx,cost[p]);
            }
        }
    }
}
int main()
{
    int i,j=1,n,a,b;
    sf(n);
    rep0(i,n-1)
    {
        sff(a,b);
        grid[a].pb(b);
        grid[b].pb(a);
    }
    bfs();
    cnt=1;
    ans=true;
    vector<int>vec;
    rep0(i,n)
    {
        sf(a);
        vec.pb(a);
        if(cost[a]==cnt)
            continue;
        else if(cost[a]==cnt+1)
            cnt++;
        else
            ans=false;
    }
    if(vec[0]!=1 || !ans)
    {
        puts("No");
        return 0;
    }
    int x;
    queue<int>q;
    q.push(1);
    x=child[1];
    reps(i,2,cnt)
    {
        while(level[i]--)
        {
            q.push(vec[j]);
            if(par[vec[j]]!=q.front())
            {
                ans=false;
                break;
            }
            j++;
            x--;
            if(!x)
            {
                q.pop();
                if(q.empty())
                    break;
                x=child[q.front()];
                while(x==0)
                {
                    q.pop();
                    if(q.empty())
                        break;
                    x=child[q.front()];
                }
            }
        }
    }
    puts(ans?"Yes":"No");
}
