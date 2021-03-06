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

const int N = 55;
const int MOD = 1000000007;

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
using ll = long long;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int n,m,good=0,bad=0;
string a[N];
int ara[N][N];
bool vis[N][N],sbad=false;
void reset()
{
    good=0,bad=0;
    memb(vis);
    sbad=false;
}
bool valid(int x,int y)
{
    return x>=0 && x<n && y>=0 && y<m;
}
void dfs(int x,int y)
{
    if(!valid(x,y))
        return;
    if(vis[x][y] || a[x][y]=='#')
        return;
    vis[x][y]=true;
    if(a[x][y]=='G')
        good--;
    if(a[x][y]=='B')
        sbad=true;
    int i,xx,yy;
    rep0(i,4)
    {
        xx=x+dx[i];
        yy=y+dy[i];
        if(valid(xx,yy))
        {
            if(a[xx][yy]!='#')
                dfs(xx,yy);
        }
    }

}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        reset();
        cin>>n>>m;
        cin.ignore();
        int i,j;
        rep0(i,n)
        {
            cin>>a[i];
            rep0(j,m)
            {
                if(a[i][j]=='G')
                    good++;
                else if(a[i][j]=='B')
                    bad++;
            }
        }
        int k,x,y;
        rep0(i,n)
        {
            rep0(j,m)
            {
                if(a[i][j]=='B')
                {
                    rep0(k,4)
                    {
                        x=i+dx[k];
                        y=j+dy[k];
                        if(valid(x,y))
                        {
                            if(a[x][y]!='G' && a[x][y]!='B')
                                a[x][y]='#';
                        }
                    }
                }
            }
        }
        if(good && a[n-1][m-1]=='#')
        {
            cout<<"No"<<endl;
            continue;
        }
        dfs(n-1,m-1);
        if(sbad || good)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}
