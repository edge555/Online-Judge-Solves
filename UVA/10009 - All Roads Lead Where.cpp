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
map<string,vector<string>>grid;
map<string,bool>vis;
map<string,string>path;
void bfs(string a,string b)
{
    int i;
    vis[a]=true;
    queue<string>q;
    q.push(a);
    while(!q.empty())
    {
        string u=q.front();
        q.pop();
        if(u==b)
            return;
        rep0(i,grid[u].size())
        {
            string v=grid[u][i];
            if(!vis[v])
            {
                vis[v]=true;
                path[v]=u;
                q.push(v);
            }
        }
    }
}
void printpath(string a,string b)
{
    stack<string>s;
    s.push(b);
    while(s.top()!=a)
        s.push(path[s.top()]);

    while(!s.empty())
    {
        cout<<s.top()[0];
        s.pop();
    }
    puts("");
}
int main()
{
    int tc,t,m,q;
    sf(tc);
    rep(t,tc)
    {
        sff(m,q);
        string a,b;
        while(m--)
        {
            cin>>a>>b;
            grid[a].pb(b);
            grid[b].pb(a);
        }
        while(q--)
        {
            cin>>a>>b;
            vis.clear();
            path.clear();
            bfs(a,b);
            printpath(a,b);
        }
        if(t!=tc)
            puts("");
        grid.clear();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
