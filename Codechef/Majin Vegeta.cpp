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
int primefact(int n)
{
    set<int>st;
    while (n%2==0)
    {
        st.insert(2);
        n/=2;
    }
    for (int i=3;i<=sqrt(n);i=i+2)
    {
        while (n%i==0)
        {
            st.insert(i);
            n/=i;
        }
    }
    if (n>2)
        st.insert(n);
    return st.size();
}
int main()
{
    int n,a,b;
    sf(n);
    while (n--)
    {
      sff(a,b);
      int sum=0;

      for (int i=a;i<b;i++)
          sum+=primefact(i);

      pf("%d\n",sum);
    }
}
