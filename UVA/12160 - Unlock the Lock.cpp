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
#define N 10000
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int st,en,r;
int dx[15],cost[N];
bool vis[N];
void bfs()
{
    queue<int>q;
    q.push(st);
    vis[st]=true;
    int i,k;
    while(!q.empty())
    {
        k=q.front();
        q.pop();
        rep0(i,r)
        {
            int p=k+dx[i];
            p%=10000;
            if(!vis[p])
            {
                vis[p]=true;
                cost[p]=cost[k]+1;
                if(p==en)
                    return;
                q.push(p);
            }
        }
    }
}
int main()
{
    int tc=1;
    while(1)
    {
        sfff(st,en,r);
        if(st+en+r==0)
            return 0;
        memb(vis);
        mem(cost);
        int i;
        rep0(i,r)
            sf(dx[i]);
        bfs();
        pf("Case %d: ",tc++);
        if(!vis[en])
            pf("Permanently Locked\n");
        else
            pf("%d\n",cost[en]);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
