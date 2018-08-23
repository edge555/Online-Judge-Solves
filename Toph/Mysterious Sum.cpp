#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
      scanf("%d %d",&a,&b);
      printf("Case %d: %d%d\n",i,a+b,a-b);
    }
}
