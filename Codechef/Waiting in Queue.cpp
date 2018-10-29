#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
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
#define pi pair<long long int,long long int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{

    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        ll n,m,k,l,i,time=0,p;
        sff(n,m);
        sff(k,l);
        time=m*l;
        vector<ll>vec;
        rep0(i,n)
        {
            sf(p);
            if(p<=k)
                vec.pb(p);
        }
        vec.pb(k);
        sort(all(vec));
        ll cur_time=0,r,d=1;
        vector<pi>vec2,vec3;
        rep0(i,vec.size())
        {
            p=vec[i];
            while(cur_time<p)
                cur_time+=l;
            vec2.pb(mpp(d,cur_time));
            cur_time+=l;
            d++;
        }

        rep0(i,vec2.size())
        {
            pi pr=vec2[i];
            ll num=pr.fi;
            num=time+(num*l);
            num-=vec[i];
            vec3.pb(mpp(num,vec[i]));

        }
        sort(all(vec3));
        pi pr=vec3[0];
        cout<<pr.fi<<endl;

    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}
