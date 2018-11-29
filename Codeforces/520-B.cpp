#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int ara[3005];
int main()
{
    int n,m,cnt=0;
    sff(n,m);
    if(n==m)
        puts("0");
    else if(n>m)
        cout<<n-m;
    else
    {
        while(n<m)
        {
            if(m%2==0)
            {
                m=m/2;
                cnt++;
            }
            else
            {
                m++;
                cnt++;
            }
      }
      if(n!=m)
         cnt+=abs(n-m);
      cout<<cnt;
    }
}
