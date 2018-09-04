#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int dx[]={-1,-1,-1,0,1,1,1};
int dy[]={-1,0,1,0,-1,0,1};

int ara[10][10],sum;
int calc(int i,int j)
{
    int k,x,y;
    sum=0;
    for (k=0;k<7;k++)
    {
        x=dx[k];
        y=dy[k];
        sum+=ara[i+x][j+y];
    }
    return sum;
}
int main()
{

    int i,j,ans=INT_MIN;
    for (i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
            cin>>ara[i][j];
    }
    for (i=1;i<=4;i++)
    {
        sum=0;
        for (j=1;j<=4;j++)
        {
            sum=calc(i,j);
            ans=max(ans,sum);
        }
    }
    cout<<ans;
}
