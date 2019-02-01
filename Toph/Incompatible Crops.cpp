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
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int n,m;
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m)
        return true;
    return false;
}
int main()
{
    int i,j,k,cnt=0;
    sff(n,m);
    getchar();
    string a[n+1];
    rep0(i,n)
        cin>>a[i];
    rep0(i,n)
    {
        rep0(j,m)
        {
            bool chk=false;
            if(a[i][j]!='.')
                continue;
            rep0(k,4)
            {
                int x=i+dx[k];
                int y=j+dy[k];
                if(valid(x,y))
                {
                    if(a[x][y]=='*')
                        chk=true;
                }
            }
            if(!chk)
                cnt++;
        }
    }
    pf("%d",cnt);
}
