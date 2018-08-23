#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define  mnn INT_MAX
typedef long long ll;
using namespace std;

int main()
{
    int n;
    sf(n);
    while(n--)
    {
      int k,ara[10001],sum=0,a,i,mn=mnn;
      sf(k);
      for (i=0;i<k;i++)
      {
        cin>>ara[i];
        sum+=ara[i];
        mn=min(ara[i],mn);
      }
      int res=sum/mn;
      vector<int>vec;
      vector<int>::iterator it;
      for (i=0;i<k;i++)
      {
          if(ara[i]==res)
            vec.push_back(i+1);
      }
      if(vec.size()==0)
        pf("NULL\n");
      else
      {
          int p=vec.size();
         for (it=vec.begin();it!=vec.end();it++,p--){
            cout<<*it;
            if(p>1)
                pf(" ");
         }
         pf("\n");
      }
    }
}
