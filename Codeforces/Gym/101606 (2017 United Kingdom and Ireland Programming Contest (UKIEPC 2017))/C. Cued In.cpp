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
const int red=1,yellow=2,green=3,brown=4,blue=5,pink=6,black=7;
int main()
{
    FAST;
    int i,n;
    cin>>n;
    string s;
    int mx=0,cnt1=0,cnt2=0;
    rep0(i,n)
    {
        cin>>s;
        if(s=="red")
            cnt1+=red;
        else if(s=="yellow")
        {
            mx=max(yellow,mx);
            cnt2+=yellow;
        }
        else if(s=="green")
        {
            mx=max(green,mx);
            cnt2+=green;
        }
        else if(s=="brown")
        {
            mx=max(brown,mx);
            cnt2+=brown;
        }
        else if(s=="blue")
        {
            mx=max(blue,mx);
            cnt2+=blue;
        }
        else if(s=="pink")
        {
            mx=max(pink,mx);
            cnt2+=pink;
        }
        else if(s=="black")
        {
            mx=max(black,mx);
            cnt2+=black;
        }
    }
    if(cnt2==0)
    {
        if(cnt1>=1)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    else
        cout<<(cnt2+cnt1*(mx+red))<<endl;
}
