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
    int t;
    sf(t);
    while(t--)
    {
        int k,p,i,n,res=0;
        string a,b;
        sf(n);
        vector<int>vec;
        for (i=1;i<=n;i++)
        {
           cin>>a;
           if(a[0]=='R')
           {
             res++;
             vec.push_back(1);
           }
           else if(a[0]=='L')
           {
              res--;
              vec.push_back(-1);
           }
           else if(a[0]=='S')
           {
               cin>>b;
               cin>>k;
               res+=vec[k-1];
               vec.push_back(vec[k-1]);
           }
        }
        cout<<res<<endl;
    }
}

