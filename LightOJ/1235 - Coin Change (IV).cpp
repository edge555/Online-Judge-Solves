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
vector<int>vec,vec2;
vector<ll>ans;
void reset()
{
    vec.clear();
    vec2.clear();
    ans.clear();
}
void func(int ind,ll sum,int n)
{
    if(ind>=n)
    {
        ans.pb(sum);
        return;
    }
    func(ind+1,sum+vec[ind],n);
    func(ind+1,sum+vec[ind]*2,n);
    func(ind+1,sum,n);
}
void func2(int ind,ll sum,int n)
{
    if(ind>=n)
    {
        ans.pb(sum);
        return;
    }
    func2(ind+1,sum+vec2[ind],n);
    func2(ind+1,sum+vec2[ind]*2,n);
    func2(ind+1,sum,n);
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        reset();
        int i,n,k,p;
        sff(n,k);
        rep0(i,n)
        {
            sf(p);
            if(i<n/2)
                vec.pb(p);
            else
                vec2.pb(p);
        }
        func(0,0,sz(vec));
        func2(0,0,sz(vec2));
        sort(all(ans));
        bool f=false;
        rep0(i,sz(ans))
        {
            if(ans[i]<=k)
            {
                ll need=k-ans[i];
                if(binary_search(all(ans),need))
                {
                    f=true;
                    break;
                }
            }
        }
        pf("Case %d: ",t);
        puts(f?"Yes":"No");
    }
}
