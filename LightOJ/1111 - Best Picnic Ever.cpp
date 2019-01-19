#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

vector<int>vec[10000];
int ara[10000],cnt[10000],k,ans;
bool vis[10000];

void bfs(int p,int n)
{
    int j,v,i;
    for (i=0;i<=n;i++)
        vis[i]=false;
    vis[p]=true;
    queue<int>q;
    q.push(p);
    cnt[p]++;
    if(cnt[p]==k)
        ans++;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(j=0;j<vec[u].size();j++)
        {
            v=vec[u][j];
            if(vis[v]==false)
            {
                q.push(v);
                cnt[v]++;
                vis[v]=true;
                if(cnt[v]==k)
                    ans++;
            }
        }
    }
}

int main()
{
    int tc,i,j,u,v,p,n,m;
    sf(tc);
    rep(j,tc)
    {
        ans=0;
        sff(k,n);
        sf(m);
        for (i=0;i<k;i++)
            cin>>ara[i];
        while(m--)
        {
            sff(u,v);
            vec[u].push_back(v);
        }
        for(i=0;i<=n;i++)
            cnt[i]=0;
        for(p=0;p<k;p++)
            bfs(ara[p],n);

        pf("Case %d: %d\n",j,ans);
        for (i=0;i<=n;i++)
            vec[i].clear();
    }
}
