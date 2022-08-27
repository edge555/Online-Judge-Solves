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
string ar;
int n,q;
int sum[27][4*N];
bool mp[27];
void build(int pos,int L,int R,char chr)
{
    if(L==R)
    {
        sum[chr-'A'][pos]=(ar[L-1]==chr);
        return;
    }
    int mid=(L+R)>>1;
    build(pos*2,L,mid,chr);
    build(pos*2+1,mid+1,R,chr);
    sum[chr-'A'][pos]=sum[chr-'A'][pos*2]+sum[chr-'A'][pos*2+1];
}
int query(int pos,int L,int R,int l,int r,char chr)
{
    if(r<L || R<l)
        return 0;
    if(L>=l && R<=r)
        return sum[chr-'A'][pos];
    int mid=(L+R)>>1;
    int x=query(pos*2,L,mid,l,r,chr);
    int y=query(pos*2+1,mid+1,R,l,r,chr);
    return x+y;
}
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        cin>>n>>q>>ar;
        memb(mp);
        mem(sum,0);
        int i;
        rep0(i,n)
            mp[ar[i]-'A']=true;
        rep0(i,26)
        {
            if(mp[i])
                build(1,1,n,'A'+i);
        }
        int l,r,ans=0;
        while(q--)
        {
            int cnt=0;
            char p;
            cin>>l>>r;
            for(p='A';p<='Z';p++)
            {
                int x=query(1,1,n,l,r,p);
                if(x&1)
                    cnt++;
            }
            if(cnt<=1)
                ans++;
        }
        cout<<"Case #"<<t<<": "<<ans<<endl;
    }
}
