#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
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
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<long long int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool comp(pi a,pi b)
{
    return a.fi>b.fi;
}
int main()
{
    int i,n,m;
    vector<pi>vec,vec2;
    ll k;
    sff(n,m);
    rep0(i,n)
    {
        sl(k);
        vec.pb({k,i});
    }
    rep0(i,m)
    {
        sl(k);
        vec2.pb({k,i});
    }
    bool swapp=false;
    if(vec2.size()<vec.size())
    {
        swapp=true;
        vec.swap(vec2);
    }
    sort(all(vec),comp);
    sort(all(vec2),comp);
    if(!swapp)
    {
        rep0(i,vec2.size())
            pf("%d %d\n",vec[0].se,i);
        rep(i,vec.size()-1)
            pf("%d %d\n",vec[i].se,vec2[max(n,m)-1].se);
    }
    else
    {
        rep0(i,vec2.size())
            pf("%d %d\n",i,vec[0].se);
        rep(i,vec.size()-1)
            pf("%d %d\n",vec2[max(n,m)-1].se,vec[i].se);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
