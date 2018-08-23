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
    while (1)
    {
      int a,b,c,d,l;
      cin>>a>>b>>c>>d>>l;
      if(a==0 && b==0 && c==0 && d==0 && l==0)
        break;
        int cnt=0;
      for(int i=0;i<=l;i++)
      {
          int res=(a*(i*i))+(b*i)+c;
          if(res%d==0)
            cnt++;
      }
      cout<<cnt<<endl;
    }
}
