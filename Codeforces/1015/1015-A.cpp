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
    int n,i,k;
    sff(k,n);
    int ara[n+5];
    memset(ara,0,sizeof(ara));
    while(k--)
    {
        int a,b;
        sff(a,b);
        for (int j=a;j<=b;j++)
            ara[j]=1;
    }
    int cnt=0;
    for (i=1;i<=n;i++)
    {
        if(ara[i]==0)
            cnt++;
    }
    if(cnt==0)
        puts("0");
    else
    {
        pf("%d\n",cnt);
        for (i=1;i<=n;i++)
        {
            if(ara[i]==0)
                cout<<i<<" ";
        }
    }
}
