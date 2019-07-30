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
ll dp[N][4];
unordered_map<char,int>mp;
string a;
ll func(int i,int j)
{
    if(i==a.size())
        return 1;
    if(dp[i][j]!=-1)
        return dp[i][j]%MOD;
     if(mp[a[i]]==j)
        return 0;
    ll ans=0,ans2=0,ans3=0;
    if(a[i]!='W')
        ans=func(i+1,mp[a[i]]);
    else
    {
        if(j==0)
        {
            ans=func(i+1,1);
            ans2=func(i+1,2);
        }
        else if(j==1)
        {
            ans=func(i+1,0);
            ans2=func(i+1,2);
        }
        else if(j==2)
        {
            ans=func(i+1,0);
            ans2=func(i+1,1);
        }
        else
        {
            ans=func(i,0);
            ans2=func(i,1);
            ans3=func(i,2);
        }
    }
    return dp[i][j]=(ans%MOD+ans2%MOD+ans3%MOD)%MOD;
}
int main()
{
    FAST;
    mp['R']=0;
    mp['G']=1;
    mp['B']=2;
    mp['W']=3;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {

        cin>>a;
        mem(dp,-1);
        cout<<"Case "<<t<<": ";
        if(a[0]!='W')
            cout<<(func(1,mp[a[0]])%MOD)<<endl;
        else
            cout<<(func(1,0)%MOD+func(1,1)%MOD+func(1,2)%MOD)%MOD<<endl;
    }
}
