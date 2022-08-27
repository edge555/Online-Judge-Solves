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
#define N 1005
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
int ara[N];
struct info
{
    int st,fn,ind;
};
bool comp(info a,info b)
{
    if(a.st==b.st)
    {
        return a.fn<b.fn;
    }
    return a.st<b.st;
}
int main()
{
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        mem(ara,-1);
        vector<info>vec;
        int i,k,n,st,fn;
        sf(n);
        rep0(i,n)
        {
            sff(st,fn);
            vec.pb({st,fn,i});
        }
        sort(all(vec),comp);
        bool f=true;
        int c=-1,j=-1;
        for(i=0,k=0;k<=24*60 && i<n;k++)
        {
            if(c<=k)
                c=-1;
            if(j<=k)
                j=-1;
            while(i<n)
            {
                int st=vec[i].st,fn=vec[i].fn;
                if(k>=st && k<=fn)
                {
                    if(c==-1)
                    {
                        ara[vec[i].ind]=1;
                        c=vec[i].fn;
                        i++;
                    }
                    else if(j==-1)
                    {
                        ara[vec[i].ind]=0;
                        j=vec[i].fn;
                        i++;
                    }
                    else
                    {
                        f=false;
                        break;
                    }
                }
                else
                    break;
            }
        }
        pf("Case #%d: ",t);
        if(!f)
            puts("IMPOSSIBLE");
        else
        {
            rep0(i,n)
            {
                if(ara[i])
                    pf("C");
                else
                    pf("J");
            }
            nl
        }
    }
}
