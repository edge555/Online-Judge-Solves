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
int ara[N];
vector<pi>vec;
vector<int>seg[3*N];
void build(int t,int i,int j)
{
    if(i==j)
    {
        seg[t].pb(vec[i].second);
        return ;
    }
    int left=t<<1,right=left|1,mid=(i+j)/2;
	build(left,i,mid);
	build(right,mid+1, j);
	merge(all(seg[left]),all(seg[right]),back_inserter(seg[t]));
}
int query_kth(int t,int i,int j,int l,int r,int k)
{
    if(i==j)
        return seg[t][0];
    int left=t<<1,right=left|1,mid =(i+j)/2,total;
    auto it=upper_bound(all(seg[left]),r);
    total=it-lower_bound(all(seg[left]),l);
    if(total>=k)
        return query_kth(left,i,mid,l,r,k);
    else
        return query_kth(right,mid+1,j,l,r,k-total);
}
int main()
{
    FAST;
    int i,n,m,x,y,k,idx,ans;
    cin>>n>>m;
    rep0(i,n)
    {
        cin>>x;
        ara[i]=x;
        vec.pb({x,i});
    }
    sort(all(vec));
    build(1,0,n-1);
    while (m--)
    {
        cin>>x>>y>>k;
        x--;y--;
        idx=query_kth(1,0,n-1,x,y,k);
        ans=ara[idx];
        cout<<ans<<endl;
    }
}
