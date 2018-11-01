#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    ll n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    while(k--)
    {
        ll t,f,tt,ff;
        cin>>t>>f>>tt>>ff;
        if(t==tt)
            cout<<abs(f-ff)<<endl;
        else
        {
            ll cnt=0;
            if(f>b)
            {
                cnt+=abs(f-b);
                f=b;
            }
            else if(f<a)
            {
                cnt+=abs(f-a);
                f=a;
            }
            if(f==ff)
            {
                cnt+=abs(t-tt);
                pf("%lld\n",cnt);
                continue;
            }
            else
            {
                cnt+=(abs(f-ff)+abs(t-tt));
                pf("%lld\n",cnt);
                continue;
            }
        }
    }
}
