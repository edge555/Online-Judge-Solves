#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

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
using namespace __gnu_pbds;
using namespace std;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,
 tree_order_statistics_node_update>ordered_set;
ll ara[N];
int main()
{
    FAST;
    ll t,tc;
    cin>>tc;
    rep(t,tc)
    {
        ordered_set os;
        ll i,n,k;
        cin>>n;
        rep(i,n)
        {
            cin>>ara[i];
            os.insert(ara[i]);
        }
        ll q,a,b,c;
        cin>>q;
        while(q--)
        {
            cin>>c>>a;
            if(c==1)
            {
                cin>>b;
                os.erase(os.find(ara[a]));
                ara[a]=b;
                os.insert(b);
            }
            else
            {
                ll lo=0,hi=n,ans;
                while(lo<=hi)
                {
                    ll mid=(lo+hi)>>1;
                    ll num=*(os.find_by_order(n-mid));
                    ll r=(mid-1)*a;
                    if(r>num)
                        hi=mid-1;
                    else
                    {
                        ans=mid;
                        lo=mid+1;
                    }
                }
                cout<<ans<<endl;
            }
        }
    }
}
