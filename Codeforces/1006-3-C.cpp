#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    ll n,i,sum,sum2=0,ans=0;
    cin>>n;
    ll ara[n+1],j;
    for (i=0;i<n;i++)
        cin>>ara[i];
    sum=ara[0];
    for (i=1,j=n-1;i<n;)
    {
        if(i>j)
            break;
        if(sum<=sum2)
            sum+=ara[i++];

        else if(sum2<sum)
            sum2+=ara[j--];

        if(sum==sum2)
            ans=sum;
    }
    pf("%lld\n",ans);
}
