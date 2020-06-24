#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
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

int main()
{
    int n,i,cnt=0;
    ll a,b,k;
    sf(n);
    stack<ll>s;
    vector<pi>vec;
    rep0(i,n)
    {
        sff(a,b);
        vec.pb(make_pair(a,b));
    }
    rep0(i,n-1)
    {
        a=vec[i].fi;
        b=vec[i].se;
        if(i==0)
        {
            s.push(a);
            cnt++;
        }
        else
        {
            k=a-b;
            if(k>s.top())
            {
                cnt++;
                s.push(a);

                continue;
            }
            k=a+b;
            if(k<vec[i+1].fi)
            {
                s.push(k);
                cnt++;
                continue;
            }
            else
                s.push(a);
        }

    }
    cout<<++cnt;
}
