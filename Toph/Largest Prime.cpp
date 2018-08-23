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
int ara[10005];
int main()
{
    int i,j;
    memset(ara,0,sizeof(ara));
    ara[0]=1;
    ara[1]=1;

    for (i=2;i<=sqrt(10005);i++)
    {
        if(ara[i]==0)
        {
            for (j=2;i*j<=10005;j++)
                ara[i*j]=1;
        }
    }
    int n,a,b,x,y,k;
    sf(n);
    while(n--)
    {
       int l=-1;
       sff(x,y);
       a=min(x,y);
       b=max(x,y);
       for(k=b;k>=a;k--)
       {
           if(ara[k]==0)
           {
               l=k;
               break;
           }

       }
       if(l==-1)
            cout<<"-1"<<endl;
       else
            cout<<l<<endl;
    }
}
