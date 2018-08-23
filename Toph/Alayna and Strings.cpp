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
    string a;
    cin>>a;
    int i,s=0,c=0;
    for (i=0;i<a.size();i++)
    {
      if(a[i]>='a' && a[i]<='z')
            s++;
      else if(a[i]>='A' && a[i]<='Z')
            c++;
    }
    pf("%d %d\n",c,s);
}
