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
struct info
{
    int l,r,id,b;
    bool operator<(const info &t)const
    {
        if(b==t.b)
            return r<t.r;
        return b<t.b;
    }
}qr[N*5];
int ara[N],vis[N],freq[N*5];
int main()
{
    int t,tc,i,j;
    sf(tc);
    rep(t,tc)
    {
        int n,m,l,r;
        sff(n,m);
        rep(i,n)
            sf(ara[i]);
        int val=sqrt(n);
        rep(i,m)
        {
            sff(qr[i].l,qr[i].r);
            qr[i].id=i;
            qr[i].b=qr[i].l/val;
        }
        sort(qr+1,qr+1+m);
        mem(vis,0);
        int L=1,R=0,temp=0;
        rep(i,m)
        {
            while(L>qr[i].l)
            {
                L--;
                vis[ara[L]]++;
                if(vis[ara[L]]==1)
                    temp++;
            }
            while(L<qr[i].l)
            {
                vis[ara[L]]--;
                if(!vis[ara[L]])
                    temp--;
                L++;
            }
            while(R>qr[i].r)
            {
                vis[ara[R]]--;
                if(!vis[ara[R]])
                    temp--;
                R--;
            }
            while(R<qr[i].r)
            {
                R++;
                vis[ara[R]]++;
                if(vis[ara[R]]==1)
                    temp++;
            }
            freq[qr[i].id]=temp;
        }
        pf("Case %d:\n",t);
        rep(i,m)
            pf("%d\n",freq[i]);
    }
}
