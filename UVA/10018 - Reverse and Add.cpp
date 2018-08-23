#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long int ll;
using namespace std;
ll rev(ll x)
{
    ll res=0;
	while (x>0)
	{
		res*=10;
		res+=(x%10);
		x/=10;
	}
	return res;
}
bool pali(ll a)
{
  ll n=rev(a);
  if(n-a==0)
    return true;
  return false;
}
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
      ll n,p,cnt=0;
      bool chk=false;
      cin>>n;
      while (chk==false)
      {
        if(pali(n)==true){
            chk=true;
            break;
        }
        p=rev(n);
        n+=p;
        cnt++;
      }
      cout<<cnt<<" "<<n<<endl;

    }
}
