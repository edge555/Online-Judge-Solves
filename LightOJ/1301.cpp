#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct info {
  ll x;
  ll flag;
}ara[200000];

bool cmp(struct info a,struct info b)
{
  if(a.x<b.x)
        return true;
  if(a.x==b.x)
  {
    if(a.flag<b.flag)
        return true;
    else
        return false;
  }
  return false;
}

int main(void)
{
   ll a,t,n,i;
    cin>>a;
   for(t=1;t<=a;t++)
    {
     cin>>n;
     ll x,y,k=0;
     for(i =1;i<=n;i++)
    {
      cin>>x>>y;
      k++;
      ara[k].x=x;
      ara[k].flag=1;
      k++;
      ara[k].x=y;
      ara[k].flag=2;
     }

     sort(ara+1,ara+1+k,cmp);

     ll cnt=1,f=0;

     for(i=2;i<=k;i++)
    {
        if(ara[i].flag==2)
        {
            f++;
        }
        else if(ara[i].flag==1)
        {
          if(f == 0)
          {
           cnt++;
          }
          else if(f!=0)
          {
            f--;
          }
        }
     }

     printf("Case %lld: %lld\n",t,cnt);
   }
   return 0;
}
