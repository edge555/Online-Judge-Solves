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
#define N 200005
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
int l[N],r[N];
vector<int>vec;
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        vec.clear();
        mem(l,0);
        mem(r,0);
        int i,n,k;
        sf(n);
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        unordered_map<int,int>mp,mp2;
        int mx=INT_MIN,mn=1;
        rep0(i,n)
        {
            mx=max(mx,vec[i]);
            if(mp.find(vec[i])==mp.end())
            {
                mp[vec[i]]=1;
                if(mx-mn+1==mp.size())
                    l[i]=mp.size();
            }
            else
                break;
        }
        mx=INT_MIN,mn=1;
        for(i=n-1;i>=0;i--)
        {
            mx=max(mx,vec[i]);
            if(mp2.find(vec[i])==mp2.end())
            {
                mp2[vec[i]]=1;
                if(mx-mn+1==mp2.size())
                    r[i]=mp2.size();
            }
            else
                break;
        }
        int cnt=0;
        rep0(i,n-1)
        {
            if(l[i] && r[i+1])
                cnt++;
        }
        cout<<cnt<<endl;
        rep0(i,n-1)
        {
            if(l[i] && r[i+1]!=0)
                cout<<l[i]<<" "<<r[i+1]<<endl;
        }
    }
}
