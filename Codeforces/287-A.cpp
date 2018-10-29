#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
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
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
int dx[]={0,0,1,1};
int dy[]={0,1,0,1};
bool valid(int x,int y)
{
    if(x>=0 && x<4 && y>=0 && y<4)
        return true;
    return false;
}
typedef long long int ll;
using namespace std;
int main()
{
    int i,n,j,dot,hashh,k;
    string a[5];
    rep0(i,4)
        cin>>a[i];
    bool ans=false;
    rep0(i,4)
    {

        rep0(j,4)
        {
            dot=0,hashh=0;
            rep0(k,4)
            {
                int x=i+dx[k];
                int y=j+dy[k];
                if(valid(x,y))
                {
                    if(a[x][y]=='.')
                        dot++;
                    else
                        hashh++;
                }
            }
            if(dot>=3 || hashh>=3)
            {
                ans=true;
                puts("YES");
                return 0;
            }
        }
    }

    if(!ans)
        puts("NO");
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}
