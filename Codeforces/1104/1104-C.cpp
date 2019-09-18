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
#define pi pair<ll,ll>
#define pii pair<pair<ll,ll>,pair<ll,ll> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int main()
{
    string a;
    cin>>a;
    int i,ara[4][4];
    mem(ara,0);
    rep0(i,a.size())
    {
        if(a[i]=='0')
        {
            if(ara[0][0]==1 && ara[0][2]==1)
            {
                ara[0][0]=0;
                ara[0][2]=0;
            }
            if(ara[0][0]==0)
            {
                ara[0][0]=1;
                puts("1 1");
            }
            else if(ara[0][2]==0)
            {
                ara[0][2]=1;
                puts("1 3");
            }
        }
        else
        {
            if(ara[2][0]==1 && ara[2][1]==1 && ara[2][2]==1 && ara[2][3]==1)
            {
                ara[2][0]=0;
                ara[2][1]=0;
                ara[2][2]=0;
                ara[2][3]=0;
            }
            if(ara[2][0]==0)
            {
                ara[2][0]=1;
                puts("3 1");
            }
            else if(ara[2][1]==0)
            {
                ara[2][1]=1;
                puts("3 2");
            }
            else if(ara[2][2]==0)
            {
                ara[2][2]=1;
                puts("3 3");
            }
            else if(ara[2][3]==0)
            {
                ara[2][3]=1;
                puts("3 4");
            }
        }
    }
}
