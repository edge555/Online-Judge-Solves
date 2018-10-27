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
#define all(x) (x).begin(),(x).end()
#define autto for(auto it=mp.begin();it!=mp.end();it++)
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int i,j,k,n,m;
int dx[]={0,0,1,1};
int dy[]={0,1,0,1};
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m)
        return true;
    return false;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        char ara[n+1][m+1];
        string a;
        int cnt=0,p=0;
        rep0(i,n)
        {
            cin>>a;
            rep0(j,m)
            {
                ara[i][j]=a[j];
                if(a[j]=='#')
                    cnt++;
            }
        }

        rep0(i,n)
        {
            rep0(j,m)
            {
                if(ara[i][j]!='#')
                {
                    int x,y;
                    bool obs=false;
                    rep0(k,4)
                    {
                        x=i+dx[k];
                        y=j+dy[k];
                        if(!valid(x,y))
                           obs=true;
                        if(ara[x][y]=='#')
                            obs=true;

                    }
                    if(!obs)
                    {
                        rep0(k,4)
                        {
                            x=i+dx[k];
                            y=j+dy[k];
                            ara[x][y]='-';
                        }
                    }
                }
            }
        }
        
        rep0(i,n)
        {
            rep0(j,m)
            {
                if(ara[i][j]=='-')
                    p++;
            }
        }

        if(p+cnt==(n*m))
            pf("YES\n");
        else
            pf("NO\n");

    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}
