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
int rnk[10001],par[10001],i;
void makeset(int n)
{
    rep(i,n)
    {
        par[i]=i;
        rnk[i]=0;
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
    int n,m;
    sff(n,m);
    makeset(n);
    int i,a,b;
    rep0(i,m)
    {
        sff(a,b);
        dsu(a,b);
    }
    if(n!=m+1)
    {
        puts("NO");
        return 0;
    }
    set<int>st;
    rep(i,n)
    {
        int p=findpar(i);
        st.insert(p);
    }
    if(st.size()==1)
        pf("YES");
    else
        pf("NO");
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}
