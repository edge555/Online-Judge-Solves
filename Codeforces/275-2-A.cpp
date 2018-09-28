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
int dx[]={-1,0,0,0,1};
int dy[]={0,-1,0,1,0};
bool valid(int n,int m)
{
    if((n>=0 && n<=2) && (m>=0 && m<=2))
        return true;
    return false;
}
int ara[5][5];
int main()
{

    int i,j,k,p;
    rep0(i,3)
    {
        rep0(j,3)
            ara[i][j]=1;
    }
    rep0(i,3)
    {
        rep0(j,3)
        {
            cin>>k;
            if(k%2==1)
            {
                rep0(p,5)
                {
                    int x=i+dx[p],y=j+dy[p];

                    if(valid(x,y))
                        ara[x][y]=(ara[x][y]==1)?0:1;

                }
            }
        }
    }
    rep0(i,3)
    {
        rep0(j,3)
            cout<<ara[i][j];
        cout<<endl;
    }
}
