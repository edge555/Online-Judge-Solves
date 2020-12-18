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

const int N = 11;
const int MOD = 1000000007;
using ll = long long;
int n,m;
string a[N];
map<int,pi>mp;
map<char,int>mp2;
int cost[6][N][N];
bool vis[6][N][N];
int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};

bool valid(int x,int y,int s)
{
    return x>=0 && x<n && y>=0 && y<m && !vis[s][x][y];
}
void bfs(int s)
{

    int sx=mp[s].fi;
    int sy=mp[s].se;
    int i,j,k;
    rep0(i,n)
    {
        rep0(j,n)
            cost[s][i][j]=MOD;
    }
    cost[s][sx][sy]=0;
    vis[s][sx][sy]=true;
    queue<pi>q;
    q.push({sx,sy});
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        int i,xx,yy;
        rep0(i,8)
        {
            xx=p.fi+dx[i];
            yy=p.se+dy[i];
            if(valid(xx,yy,s))
            {
                q.push({xx,yy});
                vis[s][xx][yy]=true;
                cost[s][xx][yy]=cost[s][p.fi][p.se]+1;
            }
        }
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    mp2[0]='G';
    mp2[1]='T';
    mp2[2]='R';
    mp2[3]='N';
    mp2[4]='M';
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        memb(vis);
        cin>>n>>m;
        int i,j,k;
        mp.clear();
        rep0(i,n)
        {
            cin>>a[i];
            rep0(j,sz(a[i]))
            {
                if(a[i][j]=='G')
                {
                    mp.insert({0,{i,j}});
                }
                else if (a[i][j]=='T')
                {
                    mp.insert({1,{i,j}});
                }
                else if(a[i][j]=='R')
                {
                    mp.insert({2,{i,j}});
                }
                else if(a[i][j]=='N')
                {
                    mp.insert({3,{i,j}});
                }
                else if(a[i][j]=='M')
                {
                    mp.insert({4,{i,j}});
                }
            }
        }

        rep0(i,5)
            bfs(i);
        int res=MOD,ans;
        vector<int>vec={1,2,3,4};
        do{
            int aa=vec[0];
            int bb=vec[1];
            int cc=vec[2];
            int dd=vec[3];
            pi paa=mp[aa];
            pi pbb=mp[bb];
            pi pcc=mp[cc];
            pi pdd=mp[dd];
            ans=0;
            ans+=cost[0][paa.fi][paa.se];
            ans+=cost[aa][pbb.fi][pbb.se];
            ans+=cost[bb][pcc.fi][pcc.se];
            ans+=cost[cc][pdd.fi][pdd.se];
            res=min(res,ans);

        }while(next_permutation(all(vec)));
        cout<<"Case #"<<t<<": Time taken "<<res+8<<" minutes"<<endl;
    }
}
