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
    int i,n,k=1;
    sf(n);
    int ara[n+1];
    for (i=0;i<n;i++)
        cin>>ara[i];

    for(i=0;;k++)
    {
      if(ara[i]-k<0)
        break;
      if(i==n-1)
         i=0;
      else
         i++;
    }
    cout<<i+1<<endl;
}
