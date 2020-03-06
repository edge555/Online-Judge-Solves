#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int dig(int n)
{
    return log10(n)+1;
}
bool lucky(int n)
{
    while(n)
    {
        int r=n%10;
        if(r==4 || r==7)
            n/=10;
        else
            return false;
    }
    return true;
}
int main()
{
    int n,i,d;
    sf(n);
    d=dig(n);
    int prev=pow(2,d)-1;
    int x=0,y;
    rep0(i,d)
    {
        x*=10;
        x+=4;
    }
    y=4;
    rep0(i,d-1)
    {
        y*=10;
        y+=7;
    }
    int j=0;
    if(n>=x && n<=y)
    {
        reps(i,x,y)
        {
            if(lucky(i))
            {
                j++;
                if(i==n)
                {
                    cout<<prev+j-1;
                    return 0;
                }
            }
        }
    }
    j=0;
    prev+=(pow(2,d)/2);
    x=7;
    rep0(i,d-1)
    {
        x*=10;
        x+=4;
    }
    y=0;
    rep0(i,d)
    {
        y*=10;
        y+=7;
    }
    reps(i,x,y)
    {
        if(lucky(i))
        {
            j++;
            if(i==n)
            {
                cout<<prev+j-1;
                return 0;
            }
        }
    }
}
