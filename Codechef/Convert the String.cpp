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

const int N = 100005;
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
int fr[N];
int main()
{
    int t,tc;
    cin>>tc;
    cin.ignore();
    rep(t,tc)
    {
        int i,j,n;
        string a,b;
        cin>>n>>a>>b;
        mem(fr,0);
        map<char,vector<int> >mp;
        rep0(i,n)
            fr[a[i]]=i+1;
        rep0(i,n)
            mp[b[i]].pb(i);
        bool f=true;
        int cnt=0;
        vector<vector<int> >ans;
        for(char ch='z';ch>='a';ch--)
        {
            vector<int>vec,ara=mp[ch];
            rep0(i,sz(ara))
            {
                if(a[ara[i]]<b[ara[i]] || !fr[ch])
                {
                    f=false;
                    break;
                }
                if(a[ara[i]]!=b[ara[i]])
                    vec.pb(ara[i]);
            }
            if(f && vec.size())
            {
                vec.pb(fr[ch]-1);
                ans.pb(vec);
            }
            if(!f)
                break;
        }
        if(!f)
        {
            puts("-1");
            continue;
        }
        pf("%d\n",ans.size());
        rep0(i,ans.size())
        {
            pf("%d",ans[i].size());
            rep0(j,ans[i].size())
                pf(" %d",ans[i][j]);
            cout<<endl;
        }
        endl;
    }
}
