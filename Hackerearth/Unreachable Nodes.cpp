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
#define autto(vec) for(auto it=vec.begin();it!=vec.end();it++)
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool vis[100001];
vector<int>grid[100001];
void dfs(int n)
{
    vis[n]=true;
    stack<int>s;
    s.push(n);
    while(!s.empty())
    {
        int i,k=s.top();
        s.pop();
        rep0(i,grid[k].size())
        {
            if(!vis[grid[k][i]])
            {
                vis[grid[k][i]]=true;
                s.push(grid[k][i]);
            }
        }
    }
}
int main()
{
    int v,e,n;
    sff(v,e);
    int i,a,b,cnt=0;
    while(e--)
    {
        sff(a,b);
        grid[a].pb(b);
        grid[b].pb(a);
    }
    sf(n);
    dfs(n);
    rep(i,v)
    {
        if(!vis[i])
            cnt++;
    }
    cout<<cnt;
}
