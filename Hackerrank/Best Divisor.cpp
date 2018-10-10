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
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int calc(int n)
{
    int k=0;
    while(n!=0)
    {
        k+=(n%10);
        n/=10;
    }
    return k;
}
int main()
{
    int k,i,ans=INT_MIN,n;
    sf(k);
    rep(i,sqrt(k))
    {
        if(k%i==0)
        {
            int c=k/i;
            int x=calc(i);
            int y=calc(c);
            if(x>ans)
            {
                ans=x;
                n=i;
            }
            else if(x==ans)
            {
                if(i<n)
                    n=i;
            }
            if(y>ans)
            {
                ans=y;
                n=c;
            }
            else if(y==ans)
            {
                if(c<n)
                    n=k/i;
            }
        }
    }
    cout<<n;
}
