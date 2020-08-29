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
int ara[N],rat[N][N],peakrating[N],temp[N];
int peakmonth[N],bestmonth[N],ranking[N][N],bestrank[N];
bool comp(int a,int b)
{
    return a>b;
}
void reset()
{
    int i;
    rep(i,N-1)
    {
        peakrating[i]=0;
        peakmonth[i]=0;
        bestmonth[i]=-1;
        bestrank[i]=MOD;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        reset();
        int i,j,n,m;
        sff(n,m);
        rep(i,n)
            sf(ara[i]);
        rep(i,n)
        {
            rep(j,m)
                sf(rat[i][j]);
        }
        rep(j,m)
        {
            rep(i,n)
            {
                ara[i]+=rat[i][j];
                temp[i]=ara[i];
                if(ara[i]>peakrating[i])
                {
                    peakrating[i]=ara[i];
                    peakmonth[i]=j;
                }
            }
            sort(temp+1,temp+1+n,comp);
            int now=1,cnt=0,last=temp[1];
            map<int,int>mp;
            rep(i,n)
            {
                if(temp[i]==last)
                {
                    cnt++;
                    mp[temp[i]]=now;
                }
                else
                {
                    now+=cnt;
                    cnt=1;
                    mp[temp[i]]=now;
                    last=temp[i];
                }
            }
            rep(i,n)
            {
                int cur=ara[i];
                ranking[i][j]=mp[cur];
            }
        }
        rep(i,n)
        {
            rep(j,m)
                bestrank[i]=min(bestrank[i],ranking[i][j]);
        }
        rep(i,n)
        {
            rep(j,m)
            {
                if(ranking[i][j]==bestrank[i])
                {
                    bestmonth[i]=j;
                    break;
                }
            }
        }
        int cnt=0;
        rep(i,n)
        {
            if(bestmonth[i]!=peakmonth[i])
                cnt++;
        }
        pf("%d\n",cnt);
    }
}
