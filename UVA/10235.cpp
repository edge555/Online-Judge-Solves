#include <bits/stdc++.h>

#define N 1000001
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;
int ara [N+1];
void seive()
{
   int i,j;
   memset(ara,0,sizeof(ara));
   ara[0]=1;
   ara[1]=1;
   for (i=2;i<=sqrt(N);i++)
   {
       if(ara[i]==0)
       {
           for (j=2;i*j<=N;j++)
            ara[i*j]=1;
       }
   }
}
int rev(int n)
{
    int k=0;
    while(n!=0)
    {
       k*=10;
       k+=(n%10);
       n/=10;
    }
    return k;
}
int main()
{
    seive();
    int n;
    while(cin>>n)
    {
        pf("%d is ",n);
        if(ara[n]!=0)
            cout<<"not prime."<<endl;
        else
        {
            if(n!=rev(n) && ara[rev(n)]==0)
                cout<<"emirp."<<endl;
            else
                cout<<"prime."<<endl;
        }
    }
}

