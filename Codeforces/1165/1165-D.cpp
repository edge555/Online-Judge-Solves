#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
bool divisor(ll n,vector<ll>vec2)
{
    vector<ll>vec;
    ll cnt=0,i,p;
    if(n&1)
    {
        for(i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
            {
                vec.pb(i);
                p=n/i;
                if(p!=i)
                    vec.pb(p);
            }
        }
    }
    else
    {
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                vec.pb(i);
                p=n/i;
                if(p!=i)
                    vec.pb(p);
            }
        }
    }
    sort(all(vec));
    if(vec.size()!=vec2.size())
        return false;
    rep0(i,vec.size())
    {
        if(vec[i]!=vec2[i])
            return false;
    }
    return true;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j,n;
        sf(n);
        vector<ll>vec;
        ll k;
        rep0(i,n)
        {
            sl(k);
            vec.pb(k);
        }
        sort(all(vec));
        unordered_set<ll>st;
        for(i=0,j=n-1;i<j;i++,j--)
            st.insert(vec[i]*vec[j]);
        if(vec.size()&1)
            st.insert(sq(vec[n/2]));
        if(st.size()==1 && divisor(*st.begin(),vec))
            pf("%lld\n",*st.begin());
        else
            pf("-1\n");
    }
}
