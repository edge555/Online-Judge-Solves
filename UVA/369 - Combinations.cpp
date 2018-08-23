#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;

long long res[101][101];

long long ncr(int a, int b){
    if(b==0)
        return 1;
    if(a==b)
        return 1;

    if(res[a][b]!=-1)
        return res[a][b];

    res[a][b]=ncr(a-1,b)+ncr(a-1,b-1);

    return res[a][b];
}

int main()
{
    int n,k;
    memset(res,-1,sizeof(res));

    while(1)
    {
        cin>>n>>k;
        if(n==0 && k==0)
            break;

        cout<<n<<" things taken "<<k<<" at a time is "<<ncr(n,k)<<" exactly."<<endl;
    }
}
