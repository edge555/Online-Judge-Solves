#include <bits/stdc++.h>
using namespace std;

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

#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()

#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))

#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >

#define endl "\n";
#define line puts("-------");
#define dbb(x) cout<<#x<<" : "<<x<<"\n";

void __print(int x) {cerr << x;} void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;} void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;} void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;} void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;} void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';} void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V> void __print(const pair<T, V> &x)
{cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> void __print(const queue<T> &x)
{queue<T>temp=x;cerr<<"\n-----\n";while(!temp.empty())
{cerr << temp.front() << endl;temp.pop();}cerr<<"-----\n";}
template<typename T> void __print(const stack<T> &x)
{stack<T>temp=x;cerr<<"\n-----\n";while(!temp.empty())
{cerr << temp.top() << endl;temp.pop();}cerr<<"-----\n";}
template<typename T> void __print(const T &x)
{int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v)
{__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
    #define db(x...) cerr << "[" << #x << "] = [", _print(x)
#endif

const int N = 1001;
const int MOD = 1000000007;
using ll = long long;
int n,m,ara[N][N],ara2[N][N];
bool vis[N][N];
bool vis2[N][N];
bool valid(int x,int y,int now)
{
    return x>=0 && x<n && y>=0 && y<m && !vis[x][y];
}
int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    memb(vis);
    mem(ara,-1);
    sff(n,m);
    int i,j,x=0,y=0,now=0;
    int cnt=2*n*m,lastx=-1,lasty=-1;
    i=0;
    while(cnt--)
    {
        i++;
        if(now==0)
        {
            if(vis[x][y])
                break;
            vis[x][y]=true;
            ara[x][y]=1;
            if(!valid(x,y+1,now))
            {
                x++;
                now=1;
            }
            else if(ara[x][y+2]==1)
                break;
            else
            {
                vis[x+1][y]=true;
                y++;
            }
        }
        else if(now==1)
        {
            if(vis[x][y])
                break;
            vis[x][y]=true;
            ara[x][y]=1;
            lastx=x;
            lasty=y;
            if(!valid(x+1,y,now))
            {
                y--;
                now=2;
            }
            else if(ara[x+2][y]==1)
                break;
            else
            {
                vis[x][y-1]=true;
                x++;
            }
        }
        else if(now==2)
        {
            if(vis[x][y])
                break;
            vis[x][y]=true;
            ara[x][y]=1;
            lastx=x;
            lasty=y;
            if(!valid(x,y-1,now))
            {
                x--;
                now=3;
            }
            else if(ara[x][y-2]==1)
                break;
            else
            {
                vis[x-1][y]=true;
                y--;
            }
        }
        else
        {
            if(vis[x][y])
                break;
            vis[x][y]=true;

            ara[x][y]=1;
            lastx=x;
            lasty=y;
            if(!valid(x-1,y,now))
            {
                y++;
                now=0;
            }
            else if(ara[x-2][y]==1)
                break;
            else
            {
                vis[x][y+1]=true;
                x--;
            }
        }
    }
    rep0(i,n)
    {
        rep0(j,m)
        {
            if(ara[i][j]==1)
                pf("#");
            else
                pf(" ");
        }
        puts("");
    }
}
