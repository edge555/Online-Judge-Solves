#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long  int ll;
using namespace std;

int main()
{
    ll i,n,a,ans,k;
    sf(n);
    while(n--)
    {
       ans=0;
       sf(k);
       for(i=0;i<k;i++){
       sf(a);
       ans=(ans+a)%k;
       }
       ans%=k;
       if(ans==0)
            cout<<"YES"<<endl;
       else
            cout<<"NO"<<endl;
    }
}
