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
#define mem(ara) memset(ara,-1,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
map<int,int>vis;
map <int,int>::iterator it;
void bfs(int st,map<int,vector<int>>grid)
{
    queue<int>q;
    q.push(st);
    vis[st]=0;
    while(!q.empty())
    {
        int p=q.front(),i;
        q.pop();
        for(i=0;i<grid[p].size();i++)
        {
            int k=grid[p][i];
            if(!vis.count(k))
            {
                vis[k]=vis[p]+1;
                q.push(k);
            }
        }
     }
}
int main()
{
    int n,a,b,tc=1,i;
    while(sf(n) && n)
    {
        map<int,vector<int>>grid;
        for(i=0;i<n;i++)
        {
            sff(a,b);
            grid[a].pb(b);
            grid[b].pb(a);

        }
        while(sff(a,b) && (a!=0 || b!=0))
        {
            vis.clear();
            bfs(a,grid);
            int cnt=0;
            for(it=vis.begin();it!=vis.end();it++)
            {
                if(it->se>b)
                cnt++;
            }
            cnt+=grid.size()-vis.size();
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",tc++,cnt,a,b);
        }
    }
}
