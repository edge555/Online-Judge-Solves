#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
typedef long long ll;
using namespace std;
struct node
{
    int s,e,val,pos;
    bool operator<(const node& n) const
    {
        if(e!=n.e)
            return e<n.e;
        return
            val>n.val;
    }
    node(){};
    node(int ss,int ee,int v,int p){
        s=ss,e=ee,val=v,pos=p;
    }
};
int occs[1000005],tree[30005],n,ans[200005];
void update(int x,int val)
{
    while(x<=n)
    {
        tree[x]+=val;
        x+=x&-x;
    }
}

int query(int x)
{
    int ret=0;
    while(x>0)
    {
        ret+=tree[x];
        x-=x&-x;
    }
    return ret;
}
int main()
{
    int q,s,e,i;
    vector<node>vec;
    sf(n);
    rep(i,n)
    {
        sf(s);
        vec.pb(node(i,i,s,-1));
    }
    sf(q);
    rep0(i,q)
    {
        sff(s,e);
        vec.pb(node(s,e,0,i));
    }
    sort(all(vec));
    rep0(i,vec.size())
    {
        if(vec[i].val==0)
            ans[vec[i].pos]=query(vec[i].e)-query(vec[i].s-1);
        else
        {
            if(occs[vec[i].val]!=0)
                update(occs[vec[i].val],-1);
            update(vec[i].s,1);
            occs[vec[i].val]=vec[i].s;
        }
    }
    rep0(i,q)
        pf("%d\n",ans[i]);
}
