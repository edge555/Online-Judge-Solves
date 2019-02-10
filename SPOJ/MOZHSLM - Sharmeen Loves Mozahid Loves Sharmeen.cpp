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
int ara[1000001];
ll res(string a)
{
    memset(ara,0,sizeof(ara));
    int i;
    for (i=0;i<a.size();i++)
    {
        if(a[i]=='s')
            ara[i]=1;
    }
    for(i=1;i<a.size();i++)
        ara[i]+=ara[i-1];

    ll sum=0;
    for (i=0;i<a.size();i++)
    {
        if(a[i]=='m')
            sum+=ara[i]*(ara[a.size()-1]-ara[i]);
    }
    return sum;
}
int main()
{
      int k;
      sf(k);
      while(k--)
      {
          string c="";
          cin>>c;
          cout<<res(c)<<endl;
      }
}
