#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;

int main()
{
    int n,tc;
    sf(n);
    for (tc=1;tc<=n;tc++)
    {
        string a;
        cin>>a;
        int l=0,u=0,d=0,i,kk;
        for (i=0;i<a.size();i++)
        {
            if(!isalpha(a[i]))
               d++;
            else
            {
              if(a[i]>='A' && a[i]<='Z')
                    u++;
              else
                    l++;
            }
        }
        kk=min(u+d,l+d);
        cspf(kk);
    }
}
