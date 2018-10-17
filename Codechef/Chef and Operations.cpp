#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
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
    int tc,j;
    cin>>tc;
    rep(j,tc)
    {
        ll i,n,k;
        sf(n);
        vector<ll>vec,vec2;
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        rep0(i,n)
        {
            sf(k);
            vec2.pb(k);
        }
        bool chk=true;
        rep0(i,n-2)
        {
            if(vec[i]==vec2[i])
                continue;
            ll p=vec2[i]-vec[i];
            if(p<0)
            {
                chk=false;
                break;
            }
            vec[i]+=p;
            vec[i+1]+=(p*2);
            vec[i+2]+=(p*3);
        }
        if(!chk)
        {
            puts("NIE");
            continue;
        }
        chk=true;
        rep0(i,n)
        {
            if(vec[i]!=vec2[i])
            {
                chk=false;
                break;
            }
        }
        if(chk)
            puts("TAK");
        else
            puts("NIE");
    }
}
