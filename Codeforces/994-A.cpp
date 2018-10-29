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
int ara[1000],ara2[1000];
int main()
{
    int n,m;
    cin>>n>>m;
    int i,j,k;

    for (i=0;i<n;i++)
        cin>>ara[i];
    for (i=0;i<m;i++)
        cin>>ara2[i];

    for (i=0;i<n;i++)
    {
        k=ara[i];
        bool ok=false;
        for (j=0;j<m;j++)
        {
            if(ara2[j]==k)
            {
                ok=true;
                break;
            }
        }
        if(ok==false)
            ara[i]=-1;
    }
    for (i=0;i<n;i++)
    {
        if(ara[i]!=-1)
            cout<<ara[i]<<" ";
    }
}
