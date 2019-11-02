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
map<ll,ll>F;
ll f(ll n)
{
    if(F.count(n))
        return F[n];
    ll k=n/2;
    if (n%2==0)
	return F[n]=(f(k)*f(k) + f(k-1)*f(k-1))%MOD;
    return F[n]=(f(k)*f(k+1) + f(k-1)*f(k))%MOD;
}
int main()
{
    F[0]=F[1]=1;
    string a;
    cin>>a;
    int i,len=a.size(),j;
    vector<int>vec;
    rep0(i,len)
    {
        if(a[i]=='u')
        {
            int st=i;
            j=i;
            while(1)
            {

                if(a[j]=='u')
                {
                    if(j==len)
                    {
                        vec.pb(j-st+1);
                        i=j;
                    }
                    else
                        j++;
                }
                else
                {
                    vec.pb(j-st);
                    i=j-1;
                    break;
                }
            }
        }
        else if(a[i]=='n')
        {
            int st=i;
            j=i;
            while(1)
            {

                if(a[j]=='n')
                {
                    if(j==len)
                    {
                        vec.pb(j-st+1);
                        i=j;
                    }
                    else
                        j++;
                }
                else
                {
                    vec.pb(j-st);
                    i=j-1;
                    break;
                }
            }
        }
        else if(a[i]=='m' || a[i]=='w')
            vec.pb(0);
    }
    ll ans=1;
    rep0(i,vec.size())
    {
        if(vec[i]==0)
        {
            ans=0;
            break;
        }
        if(vec[i]!=1)
        {
            ll p=f(vec[i]);
            ans=((ans%MOD)*(p%MOD))%MOD;
        }
    }
    cout<<ans;
}