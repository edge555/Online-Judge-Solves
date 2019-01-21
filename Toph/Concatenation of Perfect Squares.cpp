#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
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
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<string,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool ans;
string s;
int len;
bool perfect(string a)
{
    ll n=0,i;
    for(i=0;i<a.size();i++)
    {
        n*=10;
        n+=a[i]-'0';
    }
    ll k=sqrt(n);
    if(k*k==n)
        return true;
    return false;
}
void dfs(string a,int ind)
{
    if(a==s)
    {
        ans=true;
        return;
    }
    if(a.size()>=len)
        return;
    queue<pi>q;
    int i;
    string c="";
    for(i=ind;i<len;i++)
    {
        c+=s[i];
        if(perfect(c))
            dfs(a+c,i+1);
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        string b="";
        cin>>s;
        len=s.size();
        ans=false;
        dfs(b,0);
        if(ans)
            puts("Yes");
        else
            puts("No");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
