#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%f %f",&num1,&num2)
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
#define pi pair<float,float>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int rnk[100001];
int par[100001],i;
float calc(float a,float b,float c,float d)
{
    float x=(c-a);
    x*=x;
    float y=d-b;
    y*=y;
    x+=y;
    x=sqrt(x);
    return x;
}
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
    cin>>tc;
    rep(t,tc)
    {
        map<pi,int>mp;
        int j,n,k;
        float d,a,b;
        vector<pi>vec;
        cin>>n>>d;
        makeset(n);
        rep0(i,n)
        {
            sff(a,b);
            pi pr=mpp(a,b);
            vec.pb(pr);
            mp[pr]=i;
        }
        rep0(i,n)
        {
            pi pr=vec[i];
            int p=mp[pr],pp;
            reps(j,i+1,n-1)
            {
                pi prr=vec[j];
                float dis=calc(pr.fi,pr.se,prr.fi,prr.se);
                if(dis<=d)
                {
                    pp=mp[prr];
                    dsu(p,pp);
                }
            }
        }
        set<int>st;
        rep0(i,n)
        {
            int p=findpar(i);
            st.insert(p);
        }
        pf("Case %d: ",t);
        cout<<st.size()<<endl;
    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}
