#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 27
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
bool vis[N][N][N];
int dis[N][N][N];
int dx[]={1,0,0,-1,0,0};
int dy[]={0,1,0,0,-1,0};
int dz[]={0,0,1,0,0,-1};
struct node
{
    int x,y,z;
};
int bfs(string s,string e)
{
    int x=s[0]-'a',y=s[1]-'a',z=s[2]-'a';
    int xx=e[0]-'a',yy=e[1]-'a',zz=e[2]-'a';
    if(vis[x][y][z] || vis[xx][yy][zz])
        return -1;
    vis[x][y][z]=true;
    dis[x][y][z]=0;
    queue<node>q;
    q.push({x,y,z});
    while(!q.empty())
    {
        node n=q.front();
        q.pop();
        x=n.x,y=n.y,z=n.z;
        if(x==xx && y==yy && z==zz)
            return dis[xx][yy][zz];
        int i,u,v,w;
        rep0(i,6)
        {
            u=(x+dx[i]+26)%26;
            v=(y+dy[i]+26)%26;
            w=(z+dz[i]+26)%26;
            if(!vis[u][v][w])
            {
                dis[u][v][w]=dis[x][y][z]+1;
                vis[u][v][w]=true;
                q.push({u,v,w});
            }
        }
    }
}
int main()
{
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        int i,j,k,l,n;
        string s,e;
        cin>>s>>e>>n;
        string a,b,c;
        rep0(l,n)
        {
            cin>>a>>b>>c;
            rep0(i,sz(a))
            {
                int x=a[i]-'a';
                rep0(j,sz(b))
                {
                    int y=b[j]-'a';
                    rep0(k,sz(c))
                    {
                        int z=c[k]-'a';
                        vis[x][y][z]=true;
                    }
                }
            }
        }
        pf("Case %d: %d\n",t,bfs(s,e));
        memb(vis);
    }
}
