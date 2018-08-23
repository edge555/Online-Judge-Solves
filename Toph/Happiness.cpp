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
typedef long long int ll;
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
   if (n==0 || W==0)
       return 0;
   if (wt[n-1]>W)
       return knapSack(W,wt,val,n-1);
   else
       return max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
}

int main()
{
    int tc,W,n,i,a,b;
    sf(tc);
    while(tc--)
    {
        int wt[1000],val[1000];
        sff(n,W);
        for (i=0;i<n;i++)
        {
            sff(a,b);
            wt[i]=a;
            val[i]=b;
        }
        pf("%d\n",knapSack(W,wt,val,n));
    }
}
