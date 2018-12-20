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
int n,m;
vector<int>grid[N];
vector<int>vec;
unordered_map<int,int>indeg;
bool vis[N];
void reset()
{
    int i;
    rep(i,n)
    {
        grid[i].clear();
        vis[i]=false;
    }
    vec.clear();
    indeg.clear();
}

void topsort()
{
    int i;
    queue<int>q;
    rep(i,n)
    {
        if(!indeg[i])
            q.push(i);
    }
    while(!q.empty())
    {
        int k=q.front(),i;
        vec.pb(k);
        q.pop();
        rep0(i,grid[k].size())
        {
            int p=grid[k][i];
            indeg[p]--;
            if(!indeg[p])
                q.push(p);
        }
    }
}
int main()
{
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            return 0;
        reset();
        int i,a,b;
        rep0(i,m)
        {
            sff(a,b);
            grid[a].pb(b);
            indeg[b]++;
        }
        topsort();
        if(vec.size()!=n)
        {
            pf("IMPOSSIBLE\n");
            continue;
        }
        rep0(i,vec.size())
            pf("%d\n",vec[i]);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
