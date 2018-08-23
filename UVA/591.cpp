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
bool func(int a,int b)
{
    return a>b;
}
int main()
{
    int tc,i,j=1;
    while(1)
    {
      sf(tc);
      if(tc==0)
        return 0;
      int ara[tc+1],sum=0,cnt=0;
      for (i=0;i<tc;i++)
      {
          cin>>ara[i];
          sum+=ara[i];
      }

      int mid=sum/tc;
      for (i=0;i<tc;i++)
      {
         if(ara[i]>mid)
            cnt+=(ara[i]-mid);


      }
      pf("Set #%d\n",j++);
      pf("The minimum number of moves is %d.\n\n",cnt);
    }
}
