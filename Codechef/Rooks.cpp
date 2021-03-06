#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
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
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int n;
bool row[N],col[N];
void reset()
{
    int i;
    rep(i,n)
    {
        row[i]=false;
        col[i]=false;
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        reset();
        int m;
        sff(n,m);
        int i,a,b;
        rep0(i,m)
        {
            sff(a,b);
            row[a]=true;
            col[b]=true;
        }
        queue<int>q,qq;
        rep(i,n)
        {
           if(!row[i])
                q.push(i);
           if(!col[i])
                qq.push(i);
        }
        pf("%d",q.size());
        while(!q.empty())
        {
            pf(" %d %d",q.front(),qq.front());
            q.pop();
            qq.pop();
        }
        puts("");
    }
}
