#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long int ll;
using namespace std;

int main()
{
    ll i,j,n,side,sum;
    cin>>side;
    sum=0;
    for(i=1;i<=side;i++)
    {
        n=sqrt(i);
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
                sum++;
        }
    }
    cout<<sum<<endl;
}
