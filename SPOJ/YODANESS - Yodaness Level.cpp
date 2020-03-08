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
#define N 30005
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
ll Merge(int ara[],int temp[],int l,int r,int mid)
{
    int i=l,j=mid+1,k=l;
    ll inv=0;
    while(i<=mid && j<=r)
    {
        if(ara[i]<=ara[j])
            temp[k++]=ara[i++];
        else
        {
            temp[k++]=ara[j++];
            inv+=(mid-i+1);
        }
    }
    while(i<=mid)
        temp[k++]=ara[i++];
    while(j<=r)
        temp[k++]=ara[j++];
    reps(i,l,r)
        ara[i]=temp[i];
    return inv;
}
ll mergesort(int ara[],int temp[],int l,int r)
{
    if(l==r)
        return 0;
    ll ans=0;
    if(l<r)
    {
        int mid=(l+r)>>1;
        ans+=mergesort(ara,temp,l,mid);
        ans+=mergesort(ara,temp,mid+1,r);
        ans+=Merge(ara,temp,l,r,mid);
    }
    return ans;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        map<string,int>mp;
        int i,n,k=0,ara[N],temp[N];
        string a;
        vector<string>vec;
        sf(n);
        rep0(i,n)
        {
            cin>>a;
            vec.pb(a);
        }
        rep0(i,n)
        {
            cin>>a;
            mp[a]=i+1;
        }
        rep0(i,n)
            ara[i]=mp[vec[i]];
        pf("%lld\n",mergesort(ara,temp,0,n-1));
    }
}
