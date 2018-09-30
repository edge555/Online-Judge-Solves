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
#define N 100000
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int ara[N],ans[N];
    int i,mx=1;
    ara[0]=0;ara[1]=1;
    ans[0]=0;ans[1]=1;
    for (i=2;i<N;i++)
    {
        if(i%2==0)
            ara[i]=ara[i/2];
        else
            ara[i]=ara[i/2]+ara[(i/2)+1];
        mx=max(ara[i],mx);
        ans[i]=mx;
    }
    int k;
    while(1)
    {
        sf(k);
        if(k==0)
            return 0;
        cout<<ans[k]<<endl;
    }
}
