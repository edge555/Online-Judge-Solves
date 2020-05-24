#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 305
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int ara[N][N],ara2[N][N];
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j,n,m;
        map<int,int>mp;
        map<int,int>::iterator it;
        sff(n,m);
        rep0(i,n)
        {
            rep0(j,m)
            {
                sf(ara[i][j]);
                mp[ara[i][j]]++;
            }
        }
        int row=0,need=n;
        bool f=true;
        while(need--)
        {
            i=0,j=m-1;
            it=mp.begin();
            while(i<j)
            {
                int now=it->fi;
                if(mp[now]>1)
                {
                    ara2[row][i++]=now;
                    ara2[row][j--]=now;
                    mp[now]-=2;
                }
                else
                {
                    it++;
                    if(it==mp.end())
                    {
                        f=false;
                        break;
                    }
                }
            }
            row++;
        }
        if(!f)
        {
            puts("-1");
            continue;
        }
        queue<int>q;
        for(it=mp.begin();it!=mp.end();it++)
        {
            rep0(i,it->se)
                q.push(it->fi);
        }
        rep0(i,n)
        {
            rep0(j,m)
            {
                if(m&1 && j==m/2)
                {
                    pf("%d ",q.front());
                    q.pop();
                }
                else
                    pf("%d ",ara2[i][j]);
            }
            nl
        }
    }
}
