#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
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
bool op(char ch)
{
    return ch=='+' || ch=='-' || ch=='*' || ch=='/';
}
ll getnum(string &a)
{
    ll i,n=0;
    rep0(i,a.size())
    {
        n*=10;
        n+=a[i]-'0';
    }
    return n;
}
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        int i;
        string a,b="";
        cin>>a;
        deque<ll>num;
        deque<char>opr;
        rep0(i,a.size())
        {
            if(!op(a[i]))
                b+=a[i];
            else
            {
                num.pb(getnum(b));
                b.clear();
                opr.pb(a[i]);
            }
        }
        if(!b.empty())
            num.pb(getnum(b));
        deque<ll>nq;
        deque<char>oq;
        while(num.size()>1)
        {
            ll x=num.front();
            num.pop_front();
            ll y=num.front();
            num.pop_front();
            char c=opr.front();
            opr.pop_front();
            if(c=='/')
            {
                ll r;
                r=x/y;
                num.push_front(r);
            }
            else
            {
                num.push_front(y);
                nq.pb(x);
                oq.pb(c);
            }
        }

        if(!num.empty())
        {
            nq.pb(num.front());
            num.pop_front();
        }
        while(!nq.empty())
        {
            num.pb(nq.front());
            nq.pop_front();
        }
        while(!oq.empty())
        {
            opr.pb(oq.front());
            oq.pop_front();
        }
        while(num.size()>1)
        {
            ll x=num.front();
            num.pop_front();
            ll y=num.front();
            num.pop_front();
            char c=opr.front();
            opr.pop_front();
            if(c=='*')
            {
                ll r;
                r=x*y;
                num.push_front(r);
            }
            else
            {
                num.push_front(y);
                nq.pb(x);
                oq.pb(c);
            }
        }
        if(!num.empty())
            nq.pb(num.front());
        while(nq.size()>1)
        {
            ll x=nq.front();
            nq.pop_front();
            ll y=nq.front();
            nq.pop_front();
            char c=oq.front();
            oq.pop_front();
            if(c=='+')
                nq.push_front(x+y);
            else
                nq.push_front(x-y);
        }
        pf("Case %d: %lld\n",t,nq.front());
    }
}
