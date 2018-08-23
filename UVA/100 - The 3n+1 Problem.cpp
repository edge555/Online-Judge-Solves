#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long int ll;
using namespace std;
ll chk(ll n)
{
    ll cnt=0;
    while (n!=1)
    {
       if (n%2==0)
       {
           n/=2;
           cnt++;
       }
       else
       {
           n=(n*3)+1;
           cnt++;
       }
    }
    return cnt+1;
}
int main()
{
    ll a,b;
    while (scanf ("%lld %lld",&a,&b)==2)
    {
        ll i,maxx=-1,k;
        if(a<b){
        for (i=a;i<=b;i++)
        {
           k=chk(i);
           maxx=max(maxx,k);
        }
        }
        else{
        for (i=b;i<=a;i++)
        {
           k=chk(i);
           maxx=max(maxx,k);
        }
        }

        pf("%lld %lld %lld\n",a,b,maxx);
    }
}
