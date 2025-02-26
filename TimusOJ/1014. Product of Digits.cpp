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
#define N 1024001
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
string a,b;
struct node
{
    int sum,prop;
}tree[4*N];
int flip(int x)
{
    if(x==1)
        return 2;
    else if(x==2)
        return 1;
    else if(x==3)
        return 0;
    return 3;
}
void build(int cur,int st,int en)
{
    if(st>en)
        return;
    if(st==en)
    {
        node nd;
        nd.prop=0;
        if(a[st-1]=='1')
            nd.sum=1;
        else
            nd.sum=0;
        tree[cur]=nd;
        return;
    }
    int mid=(st+en)>>1;
    int left=cur<<1,right=left+1;
    build(left,st,mid);
    build(right,mid+1,en);
    tree[cur].sum=tree[left].sum+tree[right].sum;
}
void update(int cur,int st,int en,int l,int r,int type)
{
    if(tree[cur].prop)
    {
        if(tree[cur].prop==1)
            tree[cur].sum=(en-st+1);
        else if(tree[cur].prop==2)
            tree[cur].sum=0;
        else if(tree[cur].prop==3)
            tree[cur].sum=(en-st+1)-tree[cur].sum;
        if(st!=en)
        {
            if(tree[cur].prop!=3)
            {
                tree[2*cur].prop=tree[cur].prop;
                tree[2*cur+1].prop=tree[cur].prop;
            }
            else
            {
                tree[2*cur].prop=flip(tree[2*cur].prop);
                tree[2*cur+1].prop=flip(tree[2*cur+1].prop);
            }
        }
        tree[cur].prop=0;
    }
    if(st>en || st>r || en<l)
        return;
    if(st>=l && en<=r)
    {
        if(type==1)
            tree[cur].sum=(en-st+1);
        else if(type==2)
            tree[cur].sum=0;
        else if(type==3)
            tree[cur].sum=(en-st+1)-tree[cur].sum;
        if(st!=en)
        {
            if(type!=3)
            {
                tree[2*cur].prop=type;
                tree[2*cur+1].prop=type;
            }
            else
            {
                tree[2*cur].prop=flip(tree[2*cur].prop);
                tree[2*cur+1].prop=flip(tree[2*cur+1].prop);
            }
        }
        return;
    }
    int mid=(st+en)/2;
    int left=2*cur,right=left+1;
    update(left,st,mid,l,r,type);
    update(right,mid+1,en,l,r,type);
    tree[cur].sum=tree[left].sum+tree[right].sum;
}
int query(int cur,int st,int en,int l,int r)
{
    if(tree[cur].prop)
    {
        if(tree[cur].prop==1)
            tree[cur].sum=(en-st+1);
        else if(tree[cur].prop==2)
            tree[cur].sum=0;
        else if(tree[cur].prop==3)
            tree[cur].sum=(en-st+1)-tree[cur].sum;
        if(st!=en)
        {
            if(tree[cur].prop!=3)
            {
                tree[2*cur].prop=tree[cur].prop;
                tree[2*cur+1].prop=tree[cur].prop;
            }
            else
            {
                tree[2*cur].prop=flip(tree[2*cur].prop);
                tree[2*cur+1].prop=flip(tree[2*cur+1].prop);
            }
        }
        tree[cur].prop=0;
    }
    if(st>en || st>r || en<l)
        return 0;
    if(st>=l && en<=r)
        return tree[cur].sum;
    int mid=(st+en)>>1;
    int left=cur<<1,right=left+1;
    int x=query(left,st,mid,l,r);
    int y=query(right,mid+1,en,l,r);
    return x+y;
}
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        a.clear();
        int i,n,m;
        cin>>n;
        rep0(i,n)
        {
            cin>>m>>b;
            while(m--)
                a+=b;
        }
        n=a.size();
        build(1,1,n);
        int q,l,r;
        char c;
        i=1;
        cin>>q;
        pf("Case %d:\n",t);
        while(q--)
        {
            cin>>c>>l>>r;
            l++;
            r++;
            if(c=='S')
                pf("Q%d: %d\n",i++,query(1,1,n,l,r));
            else
            {
                int type=1;
                if(c=='E')
                    type=2;
                else if(c=='I')
                    type=3;
                update(1,1,n,l,r,type);
            }
        }
    }
}
