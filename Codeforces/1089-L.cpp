#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
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
bool comp(pi a,pi b)
{
    if(a.se==b.se)
        return a.fi<b.fi;
    return a.se<b.se;
}
int main()
{
    int n,k,i,p;
    sff(n,k);
    vector<int>vec;
    unordered_set<int>st;
    rep0(i,n)
    {
        sf(p);
        vec.pb(p);
        st.insert(p);
    }
    vector<pi>vec2;
    rep0(i,n)
    {
        sf(p);
        int id=vec[i];
        vec2.pb({p,id});
    }
    sort(all(vec2),comp);
    ll sum=0,need=k-st.size();
    rep0(i,n-1)
    {
        if(vec2[i].se!=vec2[i+1].se)
            vec2[i].fi=INT_MAX;
    }
    vec2[n-1].fi=INT_MAX;
    sort(all(vec2));
    i=0;
    while(need--)
    {
        sum+=vec2[i].fi;
        i++;
    }
    cout<<sum;
}
