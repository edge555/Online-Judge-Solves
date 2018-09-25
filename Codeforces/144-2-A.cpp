#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
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
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int ara[n+1];
    for (i=0;i<n;i++)
        cin>>ara[i];
    int maxx=-1,minn=ara[0],l=0,r=0;
    for (i=0;i<n;i++)
    {
        if (ara[i]>maxx)
        {
            maxx=ara[i];
            l=i;
        }
        if (ara[i]<=minn)
        {
            minn=ara[i];
            r=i;
        }
    }
    if (r<l)
        cout<<l+(n-r-2)<<endl;
    else
        cout<<l+(n-r-1)<<endl;
}
