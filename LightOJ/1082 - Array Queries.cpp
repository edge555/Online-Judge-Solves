#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int ara[N],tree[4*N];
void build(int node,int st,int en)
{
    if(st==en)
    {
        tree[node]=ara[st];
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(st+en)/2;
    build(left,st,mid);
    build(right,mid+1,en);
    tree[node]=min(tree[left],tree[right]);
}
int query(int node,int st,int en,int i,int j)
{
    if(i>en || j<st)
        return 1e9;
    if(st>=i && en<=j)
        return tree[node];
    int left=2*node;
    int right=2*node+1;
    int mid=(st+en)/2;
    int a=query(left,st,mid,i,j);
    int b=query(right,mid+1,en,i,j);
    return min(a,b);
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n,q,i;
        sff(n,q);
        rep(i,n)
            sf(ara[i]);
        build(1,1,n);
        int a,b;
        pf("Case %d:\n",t);
        while(q--)
        {
            sff(a,b);
            pf("%d\n",query(1,1,n,a,b));
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
