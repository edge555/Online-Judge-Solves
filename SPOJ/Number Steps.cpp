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
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int tc;
    sf(tc);
    while(tc--)
    {
       int a,b;
       sff(a,b);
       if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
           puts("No Number");

       else
       {
           if(a%2==0)
           {
               int k=a+b;
               if((k==a*2) || (k==a*2-2))
                    cout<<k<<endl;
               else
                    puts("No Number");
           }
           else
           {
               int k=a+b-1;
               if((k==2*a-1) || (k==2*a-3))
                   cout<<k<<endl;
               else
                   puts("No Number");
           }
       }
    }
}
