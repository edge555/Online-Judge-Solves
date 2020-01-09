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
int w[N],b[N];
int main()
{
    int i,n,m;
    unordered_set<int>st;
    sff(n,m);
    rep(i,n)
        sf(w[i]);
    deque<int>q;
    stack<int>s;
    rep(i,m)
    {
        sf(b[i]);
        if(q.size()!=n)
        {
            if(st.find(b[i])==st.end())
            {
                q.push_back(b[i]);
                st.insert(b[i]);
            }
        }
    }

    ll ans=0;
    rep(i,m)
    {
        int cur=b[i];
        while(q.front()!=b[i])
        {
            s.push(q.front());
            ans+=w[q.front()];
            q.pop_front();
        }
        q.pop_front();
        while(!s.empty())
        {
            q.push_front(s.top());
            s.pop();
        }
        q.push_front(b[i]);
    }
    cout<<ans;
}
