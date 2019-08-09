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
#define pi pair<long long int,long long int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
vector<pi>vec;
vector<string>vecs;
vector<ll>ind;
inline bool ischar(char c)
{
    return c>='a' && c<='z';
}
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        string a,b="";
        cin>>a;
        vec.clear();
        vecs.clear();
        ind.clear();
        ll i,l,r,n,last=0;
        rep0(i,a.size())
        {
            l=last+1;
            b.clear();
            n=0;
            while(ischar(a[i]))
            {
                b+=a[i];
                i++;
            }
            while(!ischar(a[i]) && i<a.size())
            {
                n*=10;
                n+=a[i]-'0';
                i++;
            }
            i--;
            ll x=b.size()*n;
            vec.pb({l,l+x-1});
            vecs.pb(b);
            last=l+x-1;
            ind.pb(last);
        }
        ll q,mx=vec[vec.size()-1].se;
        cin>>q;
        cout<<"Case "<<t<<":"<<endl;
        while(q--)
        {
            cin>>l>>r;
            if(l>mx || r>mx)
            {
                cout<<-1<<endl;
                continue;
            }
            ll in=lower_bound(all(ind),l)-ind.begin();
            string now=vecs[in];
            ll j=(l-vec[in].fi)%vecs[in].size();
            ll en=vec[in].se;
            reps(i,l,r)
            {
                if(i>en)
                {
                    now=vecs[++in];
                    en=vec[in].se;
                }
                cout<<now[j++];
                j%=now.size();
            }
            cout<<endl;
        }
    }
}
