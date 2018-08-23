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
    int j,tc;
    sf(tc);
    rep(j,tc)
    {
        int n,k,i;
        sf(n);
        int sum=0,sum2=0;
        vector<int>vec;
        rep0(i,n)
        {
           cin>>k;
           vec.pb(k);
           sum+=k;
        }
        k=sum/n;
        for (i=0;i<n;i++)
            sum2+=((vec[i]-k)*(vec[i]-k));
        pf("Case %d: %d %d\n",j,k,sum2);
    }
}
