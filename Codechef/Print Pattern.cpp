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
#define N 105
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int ara[N][N];
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j,k,n,num=1;
        sf(n);
        for(i=0;i<n;i++)
        {
            j=0;
            k=i;
            int x=j,y=k;
            while(1)
            {
                ara[j][k]=num;
                num++;
                if(j==y && k==x)
                    break;
                j++;
                k--;
            }
        }
        num=n*n;
        for(i=n-1;i>=1;i--)
        {
            j=n-1;
            k=i;
            int x=j,y=k;
            while(1)
            {
                ara[j][k]=num;
                num--;
                if(j==y && k==x)
                    break;
                j--;
                k++;
            }
        }
        rep0(i,n)
        {
            rep0(j,n)
            {
                pf("%d",ara[i][j]);
                if(j!=n-1)
                    pf(" ");
            }
            puts("");
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
