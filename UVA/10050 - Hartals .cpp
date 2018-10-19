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
    int n;
    cin>>n;
    while (n--)
    {
       int k,i;
       cin>>k;
       int ara[k+1],p,r;
       memset(ara,0,sizeof(ara));
       cin>>p;
       while(p--)
       {
         cin>>r;
         for (i=r;i<=k;i+=r){
            if(i%7!=0)
                ara[i]=1;
         }
        for (i=6;i<=k;i+=7)
            ara[i]=0;

       }
       int cnt=0;
       for (i=1;i<=k;i++)
       {
           if(ara[i]==1)
            cnt++;
       }
       cout<<cnt<<endl;
    }
}

