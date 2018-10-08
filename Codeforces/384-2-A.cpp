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
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
bool valid(int i,int j)
{
    if(i>=0 && i<n && j>=0 && j<=n)
        return true;
    return false;
}
int main()
{
    sf(n);
    int ara[n+1][n+1],i,j,k,cnt=0;
    memset(ara,0,sizeof(ara));
    rep0(i,n)
    {
        rep0(j,n)
        {
            if(ara[i][j]==0)
            {
                ara[i][j]=1;
                cnt++;
                rep0(k,4)
                {
                    int x=i+dx[k];
                    int y=j+dy[k];
                    if(valid(i,j))
                        ara[x][y]=2;
                }
            }
        }
    }
    cout<<cnt<<endl;
    rep0(i,n)
    {
        rep0(j,n)
        {
            if(ara[i][j]==1)
                pf("C");
            else if(ara[i][j]==2)
                pf(".");
        }
        if(i!=n-1)
            puts("");
    }
}
