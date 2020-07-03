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

#define mem(rmq,n) memset(rmq,n,sizeof(rmq))
#define memb(rmq) memset(rmq,false,sizeof(rmq))

#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >

#define nl puts("");
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
const int N = 505;
const int MOD = 1000000007;

int n,ara[N][N],rmq[N][N][9];
void init_rmq()
{
    int i,j,p,q;
    rep(i,n)
    {
        rep(j,n)
            rmq[i][j][0]=ara[i][j];
    }
    for(i=1;(1<<i)<=n;i++)
    {
        for(p=1;p+(1<<i)-1<=n;p++)
        {
            for(q=1;q+(1<<i)-1<=n;q++)
                rmq[p][q][i]=max(max(rmq[p][q][i-1],rmq[p+(1<<(i-1))][q][i-1]),max(rmq[p][q+(1<<(i-1))][i-1],rmq[p+(1<<(i-1))][q+(1<<(i-1))][i-1]));
        }
    }
}
int max_rmq(int x1,int y1,int x2,int y2)
{
    int k=0;
    while(1<<(k+1)<=x2-x1+1)
        k++;
    int temp1=rmq[x1][y1][k];
    int temp2=rmq[x2-(1<<k)+1][y1][k];
    int temp3=rmq[x1][y2-(1<<k)+1][k];
    int temp4=rmq[x2-(1<<k)+1][y2-(1<<k)+1][k];
    return max(max(temp1,temp2),max(temp3,temp4));
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j,q,x,y,s;
        sff(n,q);
        rep(i,n)
        {
            rep(j,n)
                sf(ara[i][j]);
        }
        init_rmq();
        pf("Case %d:\n",t);
        while(q--)
        {
            sfff(x,y,s);
            pf("%d\n",max_rmq(x,y,x+s-1,y+s-1));
        }
    }
}
