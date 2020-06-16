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
using ll = long long;
const int N = 100005;
const int MOD = 1000000007;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int p,q,pp,qq,n,m,k;
string a[N];
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m && a[x][y]=='.')
        return true;
    return false;
}
int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    FAST;
    cin>>n>>m>>k>>p>>q>>pp>>qq;
    cin.ignore();
    int i,j;
    rep0(i,n)
        cin>>a[i];
    if(p==pp && q==qq)
    {
        cout<<0;
        return 0;
    }
    bool vis[n+1][m+1];
    int cost[n+1][m+1];
    rep0(i,n+1)
    {
        rep0(j,m+1)
        {
            vis[i][j]=false;
            cost[i][j]=0;
        }
    }
    p--;q--;pp--;qq--;
    vis[p][q]=true;
    cost[p][q]=0;
    queue<pi>qqq;
    qqq.push({p,q});
    while(!qqq.empty())
    {
        pi pr=qqq.front();
        int x=pr.fi,y=pr.se;
        if(x==pp && y==qq)
        {
            cout<<cost[pp][qq];
            return 0;
        }
        qqq.pop();
        rep0(i,4)
        {
            rep(j,k)
            {
                int xx=x+dx[i]*j;
                int yy=y+dy[i]*j;
                if(!valid(xx,yy))
                    break;
                if(!vis[xx][yy])
                {
                    vis[xx][yy]=true;
                    cost[xx][yy]=cost[x][y]+1;
                    if(xx==pp && yy==qq)
                    {
                        cout<<cost[pp][qq];
                        return 0;
                    }
                    qqq.push({xx,yy});
                }
                else
                {
                    if(cost[xx][yy]>=cost[x][y]+1)
                        cost[xx][yy]=cost[x][y]+1;
                    else
                        break;
                }
            }
        }
    }
    cout<<-1;
}
