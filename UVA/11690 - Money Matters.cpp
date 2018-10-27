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
#define qi queue<int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int money[1000001],par[10000001];
int rnk[10000001],i;
vector<qi>vec;
void makeset(int n)
{
    rep0(i,n)
    {
        rnk[i]=0;
        par[i]=i;
        qi q;
        vec.pb(q);
    }
}
int findpar(int n)
{
    if(par[n]==n)
        return n;
    else
        return par[n]=findpar(par[n]);
}
void dsu(int x,int y)
{
    int xx=findpar(x),yy=findpar(y);
    if(xx!=yy)
    {
        if(rnk[xx]>rnk[yy])
            par[yy]=xx;
        else
        {
            par[xx]=yy;
            if(rnk[xx]==rnk[yy])
                rnk[yy]++;
        }
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n,m,k;
        sff(n,m);
        makeset(n);
        rep0(i,n)
        {
            sf(k);
            money[i]=k;
        }
        int a,b;
        rep0(i,m)
        {
            sff(a,b);
            dsu(a,b);
        }
        rep0(i,n)
        {
            k=findpar(i);
            vec[k].push(money[i]);
        }
        bool chk=true;
        rep0(i,n)
        {
            if(vec[i].empty())
                continue;
            int sum=0;
            while(!vec[i].empty())
            {
                sum+=vec[i].front();
                vec[i].pop();
            }
            if(sum!=0)
            {
                chk=false;
                break;
            }
        }
        if(!chk)
            puts("IMPOSSIBLE");
        else
            puts("POSSIBLE");
        vec.clear();
    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}
