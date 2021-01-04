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

const int N = 100005;
const int MOD = 1000000007;
using ll = long long;

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
        ll i,n,k;
        vector<ll>vec,vec2;
        queue<ll>q,q2;
        sl(n);
        rep0(i,n)
        {
            sl(k);
            if(k%2==0)
                vec.pb(k);
            else
                vec2.pb(k);
        }
        sort(all(vec),greater<ll>());
        sort(all(vec2),greater<ll>());
        for(auto x:vec)
            q.push(x);
        for(auto x:vec2)
            q2.push(x);
        ll alice=0,bob=0,now=0;
        while(1)
        {
            if(q.empty() && q2.empty())
                break;
            if(q.empty() || q2.empty())
            {
                if(q.size())
                {
                    if(now%2==0)
                    {
                        alice+=q.front();
                        q.pop();
                    }
                    else
                        q.pop();
                }
                else
                {
                    if(now%2==0)
                        q2.pop();
                    else
                    {
                        bob+=q2.front();
                        q2.pop();
                    }
                }
            }
            else
            {
                int x=q.front();
                int y=q2.front();
                if(now%2==0)
                {
                    if(x>=y)
                    {
                        alice+=x;
                        q.pop();
                    }
                    else
                        q2.pop();
                }
                else
                {
                    if(y>=x)
                    {
                        bob+=y;
                        q2.pop();
                    }
                    else
                        q.pop();
                }
            }
            now++;
        }
        if(alice>bob)
            puts("Alice");
        else if(bob>alice)
            puts("Bob");
        else
            puts("Tie");
    }
}
