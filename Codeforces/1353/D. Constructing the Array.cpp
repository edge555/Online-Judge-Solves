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
#define N 200005
#define mp make_pair
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<int,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int ara[N];
void func(int n)
{
    set<pii>st;
    st.insert(mp(-n,mp(1,n)));
    int now=1;
    while(!st.empty())
    {
        pii cur=*st.begin();
        int l=cur.se.fi,r=cur.se.se;
        st.erase(cur);
        if(l>r)
            continue;
        if(l==r)
        {
            ara[l]=now++;
            continue;
        }
        int x=r-l+1;
        if(x&1)
        {
            x=(l+r)/2;
            ara[x]=now++;
            st.insert(mp(-(x-l),mp(l,x-1)));
            st.insert(mp(-(r-x),mp(x+1,r)));
        }
        else
        {
            x=(l+r-1)/2;
            ara[x]=now++;
            st.insert(mp(-(x-l),mp(l,x-1)));
            st.insert(mp(-(r-x),mp(x+1,r)));
        }
    }
    int i;
    rep(i,n)
        pf("%d ",ara[i]);
    nl
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n,k;
        sf(n);
        func(n);
    }
}
