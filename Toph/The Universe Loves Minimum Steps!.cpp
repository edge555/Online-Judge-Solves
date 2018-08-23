#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define deb(x) cout<<#x<<" :: "<<x<<"\n";
#define deb2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int tc,i;
    sf(tc);
    for (i=1;i<=tc;i++)
    {
        int n,a,mx=-1;
        sf(n);
        while(n--)
        {
            sf(a);
            mx=max(mx,abs(a));
        }
        pf("Case %d: %d\n",i,mx);
    }
}
