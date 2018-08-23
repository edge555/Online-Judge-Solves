#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    ll n;
    while(scanf("%lld",&n)==1)
    {
        if(n<0 && n%2==0)
            pf("Underflow!\n");
        else if(n<0 && n%2!=0)
            pf("Overflow!\n");
        else if(n==0||n<=7)
            pf("Underflow!\n");
        else if(n==8)
            pf("40320\n");
        else if(n==9)
            pf("362880\n");
        else if(n==10)
            pf("3628800\n");
        else if(n==11)
            pf("39916800\n");
        else if(n==12)
            pf("479001600\n");
        else if(n==13)
            pf("6227020800\n");
        else if(n>13)
            pf("Overflow!\n");
    }
}
