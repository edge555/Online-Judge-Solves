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
int main()
{
    FAST;
    int i,n,qq;
    ll k,mx=-1;
    cin>>n>>qq;
    deque<ll>dq;
    rep0(i,n)
    {
        cin>>k;
        dq.pb(k);
        mx=max(mx,k);
    }
    vector<pi>vec;
    queue<ll>q;
    while(1)
    {
        int x=dq.front();
        dq.pop_front();
        int y=dq.front();
        dq.pop_front();
        if(x>y)
        {
            dq.push_front(x);
            dq.pb(y);
        }
        else
        {
            dq.push_front(y);
            dq.pb(x);
        }
        vec.pb({x,y});
        if(dq.front()==mx)
            break;
    }
    vector<ll>temp;
    dq.pop_front();
    while(!dq.empty())
    {
        temp.pb(dq.front());
        dq.pop_front();
    }
    while(qq--)
    {
        cin>>k;
        if(k<=vec.size())
            cout<<vec[k-1].fi<<" "<<vec[k-1].se<<endl;
        else
        {
            k-=vec.size();
            k=(k-1)%(n-1);
            cout<<mx<<" "<<temp[k]<<endl;
        }
    }
}
