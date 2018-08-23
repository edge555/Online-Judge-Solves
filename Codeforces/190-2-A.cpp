#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int e,c;
    sff(e,c);
    if(e==0 && c==0)
    {
        puts("0 0");
        return 0;
    }
    if(e==0 && c!=0)
    {
        puts("Impossible");
        return 0;
    }
    int mx=(c==0)?e:c+(e-1);
    int mn=(c==0 || c<=e)?e:c;
    pf("%d %d",mn,mx);
}
