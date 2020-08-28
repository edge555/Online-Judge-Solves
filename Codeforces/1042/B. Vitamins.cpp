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

#define pi pair<string,int>
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
const int N = 100005;
const int MOD = 1000000007;

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    map<string,int>mp;
    int ans=MOD;
    int i,n,j,k;
    string a;
    cin>>n;
    rep0(i,n)
    {
        cin>>k>>a;
        sort(all(a));
        if(mp.find(a)==mp.end())
            mp[a]=k;
        else
            mp[a]=min(mp[a],k);
    }
    if(mp.find("ABC")!=mp.end())
        ans=min(ans,mp["ABC"]);
    vector<pi>vec;
    if(mp.find("A")!=mp.end())
        vec.pb({"A",mp["A"]});
    if(mp.find("B")!=mp.end())
        vec.pb({"B",mp["B"]});
    if(mp.find("C")!=mp.end())
        vec.pb({"C",mp["C"]});
    if(mp.find("AB")!=mp.end())
        vec.pb({"AB",mp["AB"]});
    if(mp.find("BC")!=mp.end())
        vec.pb({"BC",mp["BC"]});
    if(mp.find("AC")!=mp.end())
        vec.pb({"AC",mp["AC"]});
    rep0(i,sz(vec))
    {
        rep0(j,sz(vec))
        {
            if(i==j)
                continue;
            set<char>st;
            for(auto x:vec[i].fi)
                st.insert(x);
            for(auto x:vec[j].fi)
                st.insert(x);
            if(sz(st)==3)
                ans=min(ans,vec[i].se+vec[j].se);
        }
    }
    rep0(i,sz(vec))
    {

        rep0(j,sz(vec))
        {
            rep0(k,sz(vec))
            {
                if(i!=j && j!=k)
                {
                    set<char>st;
                    for(auto x:vec[i].fi)
                        st.insert(x);
                    for(auto x:vec[j].fi)
                        st.insert(x);
                    for(auto x:vec[k].fi)
                        st.insert(x);
                    if(sz(st)==3)
                        ans=min(ans,vec[i].se+vec[j].se+vec[k].se);
                }
            }
        }
    }
    if(ans==MOD)
        ans=-1;
    cout<<ans;
}
