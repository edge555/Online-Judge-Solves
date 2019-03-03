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
typedef long long int ll;
using namespace std;
int table[N][17];
int ara[N],k=17,n;
void sparse()
{
    int i,j;
    for(i=0;i<n;i++)
        table[i][0]=ara[i];
    for(j=1;j<=k;j++)
    {
        for(i=0;i<=n-(1<<j);i++)
            table[i][j]=min(table[i][j-1],table[i+(1<<(j-1))][j-1]);
    }
}
int query(int L,int R)
{
    int j,ans=1e9;
    for(j=k;j>=0;j--)
    {
        if(L+(1<<j)-1<=R)
        {
            ans=min(ans,table[L][j]);
            L+=1<<j;
        }
    }
    return ans;
}
int main()
{
    int i,L,R,q;
    sf(n);
    for(i=0;i<n;i++)
        sf(ara[i]);
    sparse();
    sf(q);
    while(q--)
    {
        sff(L,R);
        pf("%d\n",query(L,R));
    }
}
