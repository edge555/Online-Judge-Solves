#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int knapSack(int W,int wt[],int val[],int n)
{
   int i,w;
   int K[n+1][W+1];

   for (i=0;i<=n;i++)
   {
       for (w=0;w<=W;w++)
       {
           if (i==0 || w==0)
               K[i][w]=0;
           else if (wt[i-1]<=w)
                 K[i][w]=max(val[i-1]+K[i-1][w-wt[i-1]],K[i-1][w]);
           else
                 K[i][w]=K[i-1][w];
       }
   }
   return K[n][W];
}

int main()
{
    int tc;
    sf(tc);
    while(tc--)
    {
        int n,W;
        sff(n,W);
        int i,a,b;
        int wt[n+1],val[n+1];
        rep0(i,n)
        {
            sff(a,b);
            wt[i]=a;
            val[i]=b;
        }
        pf("%d\n",knapSack(W,wt,val,n));
    }
}
