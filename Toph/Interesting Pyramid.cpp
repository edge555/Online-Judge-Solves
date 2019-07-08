#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
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
int grid[52][100];
bool valid(int x,int y)
{
    return x>=0 && y>=0;
}
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            return 0;
        int i=0,j=0,k,jj,lim=n,newj=0;
        rep0(k,(n/2)+1)
        {
            j=newj;
            rep0(jj,lim)
            {
                cin>>grid[i][j];
                j++;
            }
            lim-=2;
            newj++;
            i++;
        }
        int mid=n/2,height=n/2;
        ll sum=0,mx=-1;
        while(height>=0)
        {
            i=height;
            j=mid;
            sum=0;
            while(valid(i,j))
            {
                sum+=grid[i][j];
                i--;
                j--;
            }
            i=height;
            j=mid;
            sum-=grid[i][j];
            while(valid(i,j))
            {
                sum+=grid[i][j];
                i--;
                j++;
            }
            mx=max(mx,sum);
            height--;
        }
        pf("%lld\n",mx);
    }
}
