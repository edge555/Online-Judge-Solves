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
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
struct fenwick
{
    ll x;
    vector<ll>tree;
    fenwick(ll n):x(n)
    {
        tree.resize(n+1);
    }
    void update(int pos,ll val)
    {
        while(pos<=x)
        {
            tree[pos]+=val;
            pos+=(pos&-pos);
        }
    }
    void update(int l,int r,ll val)
    {
        update(l,val);
        update(r+1,-val);
    }
    ll query(int pos)
    {
        ll sum=0;
        while(pos)
        {
            sum+=tree[pos];
            pos-=(pos&-pos);
        }
        return sum;
    }
    ll query(int l, int r)
    {
        return query(r)-query(l);
    }
};
int main()
{
    int i,n,k;
    sf(n);
    fenwick fnw(n+2);
    rep(i,n)
    {
        sf(k);
        fnw.update(i,k);
    }
    int q,l,r;
    sf(q);
    char ch;
    while(q--)
    {
        getchar();
        scanf("%c %d %d",&ch,&l,&r);
        if(ch=='q')
            pf("%lld\n",fnw.query(l-1,r));
        else
            fnw.update(l,r);
    }
}
