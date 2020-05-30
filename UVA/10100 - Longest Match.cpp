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
#define pb push_back

#define fi first
#define se second
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

const int N = 1005;
const int MOD = 1000000007;

using ll = long long;
using namespace std;

void __print(int x) {cerr << x;} void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;} void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;} void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;} void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;} void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';} void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V> void __print(const pair<T, V> &x)
{cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> void __print(const T &x)
{int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v)
{__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
    #define db(x...) cerr << "[" << #x << "] = [", _print(x)
#endif

vector<string>v1,v2;
int dp[N][N];
int func(int i,int j)
{
    if(i==v1.size())
        return 0;
    if(j==v2.size())
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int ans=0;
    ans=max(ans,func(i+1,j));
    ans=max(ans,func(i,j+1));
    if(v1[i]==v2[j])
        ans=max(ans,func(i+1,j+1)+1);
    return dp[i][j]=ans;
}
int main(void)
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int tc=0;
    string a,b;
    while(getline(cin,a))
    {
        int i,j;
        getline(cin,b);
        rep0(i,sz(a))
        {
            if(!isalnum(a[i]))
                a[i]=' ';
        }
        rep0(i,sz(b))
        {
            if(!isalnum(b[i]))
                b[i]=' ';
        }
        v1.clear();
        v2.clear();
        stringstream s(a);
        stringstream ss(b);
        string temp;
        while(s>>temp)
            v1.push_back(temp);
        while(ss>>temp)
            v2.push_back(temp);
        rep0(i,sz(v1))
        {
            rep0(j,sz(v2))
                dp[i][j] = -1;
        }
        int ans=func(0,0);
        if(!ans)
            pf("%2d. Blank!\n",++tc);
        else
            pf("%2d. Length of longest match: %d\n",++tc,ans);
    }
}
/*
This is a test.
test
Hello!

The document provides late-breaking information
late breaking.
*/
