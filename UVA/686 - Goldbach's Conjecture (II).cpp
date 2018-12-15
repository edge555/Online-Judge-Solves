#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 1000001
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int flag[N>>6];
#define chkbit(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define setbit(x) (flag[x>>6]|=(1<<((x>>1)&31)))
void sieve()
{
    long long int i,j,k;
    for(i=3;i<sqrt(N);i+=2)
    {
        if(!chkbit(i))
        {
            for(j=i*i,k=i<<1;j<N;j+=k)
                setbit(j);
        }
    }
    setbit(1);
}

int main()
{
    sieve();
    int n,a,b,i;
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        int cnt=0;
        int k=n-2;
        if(k==2)
            cnt++;
        else if(k%2==1 & !chkbit(k))
            cnt++;
        for(i=3;i<=n/2;i+=2)
        {
            if(!chkbit(i))
            {
                k=n-i;
                if(k%2==0)
                    continue;
                if(!chkbit(k))
                    cnt++;
            }
        }
        pf("%d\n",cnt);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
