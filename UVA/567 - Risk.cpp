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
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool vis[25];
int cost[25],i;
vector<int>grid[25];
void bfs(int st,int endd)
{
    st--;endd--;
    vis[st]=true;
    cost[st]=0;
    queue<int>q;
    q.push(st);
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        rep0(i,grid[p].size())
        {
            int k=grid[p][i];
            if(!vis[k])
            {
                vis[k]=true;
                cost[k]=cost[p]+1;
                q.push(k);
            }
        }
    }
}
int main()
{
    int t=1,v,e,i;
    while(scanf("%d",&v)==1)
    {
        while(v--)
        {
            sf(e);
            e--;
            grid[0].pb(e);
            grid[e].pb(0);
        }
        rep(i,18)
        {
            sf(v);
            while(v--)
            {
                sf(e);
                e--;
                grid[i].pb(e);
                grid[e].pb(i);
            }
        }
        int q,st,endd;
        sf(q);
        pf("Test Set #%d\n",t++);
        while(q--)
        {
            sff(st,endd);
            memb(vis);
            mem(cost);
            bfs(st,endd);
            if(st<10)
                pf(" ");
            pf("%d to ",st);
            if(endd<10)
                pf(" ");
            pf("%d: ",endd);
            pf("%d\n",cost[endd-1]);
        }
        pf("\n");
        rep0(i,25)
            grid[i].clear();
    }

    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
