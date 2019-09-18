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
int n,m;
string a[N];
bool valid(int i,int j)
{
    return i>=0 && i<n && j>=0 && j<m && a[i][j]=='*';
}
bool nonempty(int i,int j)
{
    return a[i][j+1]!='.' && a[i][j-1]!='.' && a[i+1][j]!='.' && a[i-1][j]!=',';
}
void removestar(int i,int j)
{
    int x=i+1,y=j;
    while(1)
    {
        if(valid(x,y))
        {
            a[x][y]='.';
            x++;
        }
        else
            break;
    }
    x=i-1;
    while(1)
    {
        if(valid(x,y))
        {
            a[x][y]='.';
            x--;
        }
        else
            break;
    }
    x=i;
    y=j+1;
    while(1)
    {
        if(valid(x,y))
        {
            a[x][y]='.';
            y++;
        }
        else
            break;
    }
    y=j-1;
    while(1)
    {
        if(valid(x,y))
        {
            a[x][y]='.';
            y--;
        }
        else
            break;
    }
    a[i][j]='.';
}
int main()
{
    sff(n,m);
    int i,j;
    rep0(i,n)
        cin>>a[i];
    bool star=false;
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<m-1;j++)
        {
            if(nonempty(i,j) && a[i][j]=='*' && !star)
            {
                star=true;
                removestar(i,j);
                break;
            }
        }
    }
    if(!star)
    {
        pf("NO");
        return 0;
    }
    rep0(i,n)
    {
        rep0(j,m)
        {
            if(a[i][j]!='.')
            {
                pf("NO");
                return 0;
            }
        }
    }
    pf("YES");
}
