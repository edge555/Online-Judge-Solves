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
int rnk[1000005],par[1000005],i;
void makeset(int n)
{
    rep0(i,n)
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
void dsu(int a,int b)
{
    int x=findpar(a),y=findpar(b);
    if(x!=y)
    {
        if(rnk[x]>rnk[y])
            par[y]=x;
        else
        {
            par[x]=y;
            if(rnk[x]==rnk[y])
                rnk[y]++;
        }
    }
}
int main()
{
    int n,m;
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            return 0;
        makeset(n);
        int k,p,l;
        while(m--)
        {
            sff(k,l);
            k--;
            while(k--)
            {
                sf(p);
                dsu(p,l);
            }
        }
        int ans=findpar(0),cnt=1;
        rep(i,n-1)
        {
            int pr=findpar(i);
            if(pr==ans)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}
