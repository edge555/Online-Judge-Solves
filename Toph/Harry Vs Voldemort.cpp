#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool comp(ll a ,ll b)
{
    return a>b;
}
int main()
{

    int tc,j;
    sf(tc);
    rep(j,tc)
    {
        int i,n;
        ll k,sum,p;
        cin>>n>>sum;
        vector<ll>vec;
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        sort(all(vec),comp);
        int cnt=0;
        rep0(i,n)
        {
            if(sum<=0)
                break;
            cnt++;
            sum-=vec[i];
        }
        pf("Case %d: ",j);
        if(sum>0)
            puts("Dobby is sorry for master Harry");
        else
            cout<<cnt<<endl;

    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}
