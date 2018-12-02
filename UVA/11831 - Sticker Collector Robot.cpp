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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,cnt,x,y,dir;
string a[101];
bool chk;
bool valid(int x,int y)
{
    if (x<0 || x>=n || y<0 || y>=m || a[x][y]=='#')
        return false;
    return true;
}
void movef()
{
    int u=x,v=y;
    if(dir==0)
        u--;
    else if(dir==1)
        v++;
    else if(dir==2)
        u++;
    else
        v--;
    if(valid(u,v))
    {
        a[x][y]='.';
        if(a[u][v]=='*')
            cnt++;
        x=u;
        y=v;
    }
}
void moved()
{
    dir++;
    dir%=4;
}
void movee()
{
    dir--;
    if(dir<0)
        dir=3;
}
int main()
{
    int i,j,k;
    while(1)
    {
        sfff(n,m,k);
        if(n+m+k==0)
            return 0;
        char ch;
        rep0(i,n)
        {
            cin>>a[i];
            rep0(j,a[i].size())
            {
                if(a[i][j]=='N' || a[i][j]=='S' || a[i][j]=='L' || a[i][j]=='O')
                {
                    x=i;
                    y=j;
                    ch=a[i][j];
                }
            }
        }
        if (ch=='N')
            dir=0;
        else if(ch=='L')
            dir=1;
        else if(ch=='S')
            dir=2;
        else if(ch=='O')
            dir=3;
        string s;
        cin>>s;
        cnt=0;
        chk=true;
        rep0(i,s.size())
        {
            if(!chk)
                continue;
            if(s[i]=='F')
                movef();
            else if(s[i]=='D')
                moved();
            else
                movee();
        }
        pf("%d\n",cnt);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
