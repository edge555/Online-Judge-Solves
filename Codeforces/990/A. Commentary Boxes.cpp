#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long ll;
using namespace std;

int main()
{
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    if(n%m==0)
        cout<<0<<endl;
    else
    {
        ll y=n/m;
        ll x=y+1;
        y*=m;
        x*=m;
        x-=n;
        y=n-y;
        cout<<min(y*b,x*a)<<endl;
    }
}
