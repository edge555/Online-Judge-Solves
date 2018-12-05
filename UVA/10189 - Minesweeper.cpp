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
#define N 101
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};
int n,m;
string a[N];
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m)
        return true;
    return false;
}
int main()
{
    int i,tc=1,j,k;
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            return 0;
        rep0(i,n)
            cin>>a[i];
        if(tc>1)
            puts("");
        rep0(i,n)
        {
           rep0(j,m)
            {
                if(a[i][j]=='.')
                {
                    int cnt=0;
                    rep0(k,8)
                    {
                        int xx=i+dx[k];
                        int yy=j+dy[k];
                        if(valid(xx,yy))
                        {
                            if(a[xx][yy]=='*')
                                cnt++;
                        }
                    }
                    a[i][j]=cnt+'0';
                }
            }
        }
        pf("Field #%d:\n",tc++);
        rep0(i,n)
            cout<<a[i]<<'\n';
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
