#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%llu %llu",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define N 5000002
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef unsigned long long int ull;
using namespace std;

ull phi[N+1];
int mark[N+1];

void seivePhi()
{
    long long int i,j;
    for(i=2;i<=N;i++)
        phi[i]=i;

    for(i=2;i<=N;i++)
    {
        if(!mark[i])
	{
            for(j=i;j<=N;j+=i)
            {
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
	}
    }
    for(i=3;i<N;i++)
    {
        phi[i]*=phi[i];
        phi[i]+=phi[i-1];
    }
}
int main()
{
    seivePhi();
    int tc,i;
    ull ans,a,b;
    sf(tc);
    for(i=1;i<=tc;i++)
    {
        sff(a,b);
        ans=phi[b]-phi[a-1];
        printf("Case %d: %llu\n",i,ans);
    }
}
