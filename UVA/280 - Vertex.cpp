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
#define N 10005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,a,b;
vector<int>grid[N],vertex[N];
bool vis[N];
void setvalue()
{
    int i;
    rep(i,n)
    {
        vis[i]=false;
        grid[i].clear();
    }
}
void bfs(int n)
{
    int i;
    queue<int>q;
    q.push(n);
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
                q.push(k);
            }
        }
    }
}
void setvertex(int p)
{
    int j;
    rep(j,n)
    {
        if(!vis[j])
            vertex[p].pb(j);
        vis[j]=false;
    }

}
void printvertex(int p)
{
    int j;
    pf("%d",vertex[p].size());
    rep0(j,vertex[p].size()){
        pf(" %d",vertex[p][j]);
    }
    puts("");
}
int main()
{
    int i,j;
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        setvalue();
        while(1)
        {
            sf(a);
            if(a==0)
                break;
            while(1)
            {
                sf(b);
                if(b==0)
                    break;
                grid[a].pb(b);
            }
        }
        rep(i,n)
        {
            bfs(i);
            setvertex(i);
        }
        sf(m);
        while(m--)
        {
            sf(a);
            printvertex(a);

        }
        rep(i,n)
            vertex[i].clear();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
