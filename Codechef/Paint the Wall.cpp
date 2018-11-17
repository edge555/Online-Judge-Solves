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
        ll n,m,i,k;
        vector<ll>vec,vec2;
        sff(n,m);
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        rep0(i,n)
        {
            sf(k);
            vec2.pb(k);
        }
        stack<pi>s;
        s.push(mpp(vec[0],vec2[0]));
        for(i=1;i<n;i++)
        {
            pi p=s.top();
            int q=vec[i];
            if(q<p.fi)
            {
                pi pr=mpp(vec[i],vec2[i]);
                s.push(pr);
            }
            else
            {
                while(1)
                {
                    if(s.empty())
                    {
                        pi pr=mpp(vec[i],vec2[i]);
                        s.push(pr);
                        break;
                    }
                    pi p=s.top();
                    if(p.fi<=q)
                        s.pop();
                    else
                    {
                        pi pr=mpp(vec[i],vec2[i]);
                        s.push(pr);
                        break;
                    }
                }
            }
        }
        set<ll>st;
        while(!s.empty())
        {
            pi pr=s.top();
            st.insert(pr.se);
            s.pop();
        }
        pf("%d\n",st.size());
    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}
