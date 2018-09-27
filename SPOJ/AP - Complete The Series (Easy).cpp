#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
   ll sum,t3,tl3;
   ll n,i,a,d,tc;
   sf(tc);

   while(tc--)
   {
      cin>>t3>>tl3>>sum;
      n=(2*sum)/(tl3+t3);
      d=(tl3-t3)/(n-5);
      a=t3-2*d;
      cout<<n<<endl;
      rep0(i,n)
         pf("%lld ",a+i*d);
      puts("");
   }
}
