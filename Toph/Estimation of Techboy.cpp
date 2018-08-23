#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sc scanf
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
    int t;
    sf(t);
    while(t--)
    {
        int n,k,i;

        sff(n,k);
        int ara[n+1];

        sc("%d",&ara[0]);
        for(i=1;i<n;i++)
        {
            sc("%d",&ara[i]);
            ara[i]+=ara[i-1];
        }
        int comp[n+1];
        sc("%d",&comp[0]);
        for(i=1;i<n;i++)
        {
            sc("%d",&comp[i]);
            comp[i]+=comp[i-1];
        }
        int ans=k;
        bool chk=true;
        for(i=0;i<n;i++)
        {
            if(ara[i]<comp[i])
            {
                int kk=ceil((double)ara[i]/k);
                cout<<k*kk<<"  "<<comp[i]<<endl;
                if(k*kk<comp[i])
                {

                    chk=false;
                    break;
                }
            }
        }
        if(chk)
            pf("YES\n");
        else
            pf("NO\n");
    }
}
