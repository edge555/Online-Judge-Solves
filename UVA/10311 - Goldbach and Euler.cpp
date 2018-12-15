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
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define autto(vec) for(auto it=vec.begin();it!=vec.end();it++)
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
const int MAX=100000000;
const int LMT=10000;
int flag[MAX>>6];
#define chkbit(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define setbit(x) (flag[x>>6]|=(1<<((x>>1)&31)))
void sieve()
{
    int i,j,k;
    for(i=3;i<LMT;i+=2)
    {
        if(!chkbit(i))
        {
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setbit(j);
        }
    }
    setbit(1);
}

int main()
{
    sieve();
    int n;
    while(sf(n)!=EOF)
    {
        if(n%2==1)
        {
            if(n==1)
                pf("1 is not the sum of two primes!\n");
            else if(!chkbit(n-2))
                pf("%d is the sum of 2 and %d.\n",n,n-2);
            else
                pf("%d is not the sum of two primes!\n",n);
        }
        else
        {
            int k=n/2,p;
            bool chk=false;
            if(k%2==0)
                k--;
            while(k>1)
            {
                p=n-k;
                if(!chkbit(k) && !chkbit(p) && p!=k && p%2!=0 && k%2!=0)
                {
                    pf("%d is the sum of %d and %d.\n",n,k,p);
                    chk=true;
                    break;
                }
                k-=2;
            }
            if(!chk)
                pf("%d is not the sum of two primes!\n",n);
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
