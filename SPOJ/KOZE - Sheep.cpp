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
#define N 255
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

char a[N][N];
int sh,s,wf,w;
int n,m;

void dfs(int i,int j)
{
    if(a[i][j]=='k')
        sh++;
    else if(a[i][j]=='v')
        wf++;

    a[i][j]='#';
    if (i>0 && a[i-1][j]!='#')
        dfs(i-1,j);
    if (i+1<n && a[i+1][j]!='#')
        dfs(i+1,j);
    if (j>0 && a[i][j-1]!='#')
        dfs(i,j-1);
    if (j+1<m && a[i][j+1]!='#')
        dfs(i,j+1);
}
int main()
{
    sff(n,m);
    int i,j;
    rep0(i,n)
        scanf("%s\n",a[i]);

    rep0(i,n)
    {
        rep0(j,m)
        {
            if(a[i][j]!='#')
            {
                dfs(i,j);
                if (sh>wf)
                    s+=sh;
                else
                    w+=wf;
                sh=0;wf=0;
            }
        }
    }
    printf("%d %d\n",s,w);
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
