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

int main()
{
    int a,b,x,y,cnt=0,k;
    sff(a,b);
    sf(k);
    if(a<0)
        a*=-1;
    if(b<0)
        b*=-1;
    x=min(a,b);
    cnt+=(x*2);
    cnt+=(a-x);
    cnt+=(b-x);
    k-=cnt;
    if(k<0)
        pf("No");
    else
    {
        if(k%2==0)
            pf("Yes");
        else
            pf("No");
    }
}
