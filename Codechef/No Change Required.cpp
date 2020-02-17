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
#define N 100005
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
int ind1,ind2;
int possible(int x,int y,int k)
{
    int l=k/x;
    l--;
    int need=k-(l*x);
    if(need%y==0)
        return 0;
    int r=need/y;
    if(r*y<need)
        r++;
    ind1=l,ind2=r;
    return 1;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j,n,k,num,p;
        vector<int>vec;
        unordered_map<int,int>mp;
        unordered_set<int>st;
        int ind=-1;
        sff(n,k);
        rep0(i,n)
        {
            sf(p);
            vec.pb(p);
            if(p!=1 && p!=k)
                mp[p]++;
            else
                continue;
            if(k%p!=0)
                ind=i;
            else
            {
                if(mp[p]==1)
                    st.insert(i);
            }
        }
        if(ind!=-1)
        {
            puts("YES");
            rep0(i,n)
            {
                if(i==ind)
                {
                    int r=k/vec[i];
                    pf("%d ",r+1);
                }
                else
                    pf("0 ");
            }
            nl
            continue;
        }
        if(st.size()<2)
        {
            puts("NO");
            continue;
        }
        unordered_set<int>::iterator it;
        vector<int>inds;
        for(it=st.begin();it!=st.end();it++)
            inds.pb(*it);
        sort(all(inds));
        bool ans=false;
        for(i=0;i<sz(inds);i++)
        {
            int x=vec[inds[i]];
            for(j=i+1;j<sz(inds);j++)
            {
                int y=vec[inds[j]],chk=0;
                chk=possible(x,y,k)+possible(y,x,k);
                if(chk!=2)
                    continue;
                ans=true;
                break;
            }
            if(ans)
                break;
        }
        if(!ans)
            puts("NO");
        else
        {
            puts("YES");
            for(int ii=0;ii<sz(vec);ii++)
            {
                if(ii==inds[i])
                    pf("%d ",ind2);
                else if(ii==inds[j])
                    pf("%d ",ind1);
                else
                    pf("0 ");
            }
            nl
        }
    }
}
