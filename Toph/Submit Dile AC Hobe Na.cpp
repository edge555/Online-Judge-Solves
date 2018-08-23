#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;

int main()
{
    int n,i,j;
    sf(n);
    int ara[n+1],ara2[n+1];
    for (i=0;i<n;i++)
        cin>>ara[i];
    for (i=0;i<n;i++)
        cin>>ara2[i];
    int cnt=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(ara[i]==ara2[j])
                cnt++;
        }

    }
    cout<<cnt<<endl;
}
