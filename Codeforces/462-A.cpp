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
int dx[]={-1,0,0,1};
int dy[]={0,1,-1,0};
int n;
bool valid(int i,int j)
{
    if(i>=0 && i<n && j>=0 && j<n)
        return true;
    return false;
}
int main()
{
    int i,k,j;
    sf(n);
    string a[n+1];
    rep0(i,n)
        cin>>a[i];
    rep0(i,n)
    {
        rep0(j,n)
        {
            int x,y,cnt=0;
            rep0(k,4)
            {
                x=i+dx[k];
                y=j+dy[k];
                if(valid(x,y))
                {
                    if(a[x][y]=='o')
                        cnt++;
                }
            }
            if(cnt%2==1)
            {
                pf("NO");
                return 0;
            }
        }
    }
    pf("YES");
}
