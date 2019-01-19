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
#define N 105
#define MAX 1000001
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
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
bool vis[MAX];
string a[N];
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m)
        return true;
    return false;
}
void dfs(int x,int y,ll k,int dig)
{
    vis[k]=true;
    if(dig>=6 || k>MAX)
        return;
    int i;
    for(i=0;i<4;i++)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(valid(xx,yy))
        {
            int r=a[xx][yy]-'0';
            ll n=k*10+r;
            dfs(xx,yy,n,dig+1);
        }
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        queue<pi>q;
        int i,j;
        memb(vis);
        rep0(i,n)
        {
            cin>>a[i];
            rep0(j,m)
            {
                if(a[i][j]!='0')
                    q.push({i,j});
            }
        }
        while(!q.empty())
        {
            pi p=q.front();
            q.pop();
            ll num=a[p.fi][p.se]-'0';
            dfs(p.fi,p.se,num,1);
        }
        for(i=1;i<MAX;i++)
        {
            if(!vis[i])
            {
                pf("%d\n",i);
                break;
            }
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
