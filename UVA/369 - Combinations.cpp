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
#define mem(ara) memset(ara,-1,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

long long res[101][101];

long long ncr(int a, int b)
{
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
    mem(res);

    while(1)
    {
        sff(n,k);
        if(n==0 && k==0)
            break;

        cout<<n<<" things taken "<<k<<" at a time is "<<ncr(n,k)<<" exactly."<<endl;
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
