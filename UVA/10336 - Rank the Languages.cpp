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
#define pi pair<char,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m;
string a[N];
char ch;
unordered_map<char,int>mp;
vector<pi>vec;
void reset()
{
    mp.clear();
    vec.clear();
}
bool valid(int x,int y)
{
    return x>=0 && x<n && y>=0 && y<m && a[x][y]==ch;
}
void dfs(int x,int y)
{
    int i,xx,yy;
    rep0(i,4)
    {
        xx=x+dx[i];
        yy=y+dy[i];
        if(valid(xx,yy))
        {
            a[xx][yy]='.';
            dfs(xx,yy);
        }
    }
}
bool comp(pi a,pi b)
{
    if(a.se==b.se)
        return a.fi<b.fi;
    return a.se>b.se;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        reset();
        int i,j;
        rep0(i,n)
            cin>>a[i];
        rep0(i,n)
        {
            rep0(j,m)
            {
               if(a[i][j]!='.')
                {
                    ch=a[i][j];
                    mp[ch]++;
                    dfs(i,j);
                }
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++)
            vec.pb({it->fi,it->se});
        sort(all(vec),comp);
        pf("World #%d\n",t);
        rep0(i,vec.size())
        pf("%c: %d\n",vec[i].fi,vec[i].se);
    }
}
