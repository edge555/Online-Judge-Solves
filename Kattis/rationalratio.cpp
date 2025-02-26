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
ll to_num(string a)
{
    ll i,p=0;
    rep0(i,a.size())
    {
        p*=10;
        p+=a[i]-'0';
    }
    return p;
}
int main()
{
    ll i,k,cnt=0;
    string a,b,left="",right="";
    cin>>b>>k;
    bool chk=true;
    rep0(i,b.size())
    {
        if(b[i]=='.')
        {
            chk=false;
            continue;
        }
        if(chk)
            left+=b[i];
        else
            right+=b[i];
    }
    cnt=right.size();
    ll x,y;
    if(k==cnt)
    {
        x=to_num(right);
        y=pow(10,cnt)-1;
        ll g=__gcd(x,y);
        x/=g;
        y/=g;
    }
    else
    {
        x=to_num(right);
        string temp;
        rep0(i,right.size()-k)
            temp+=right[i];
        ll d=to_num(temp);
        x-=d;
        temp.clear();
        rep0(i,k)
            temp+="9";
        rep0(i,right.size()-k)
            temp+="0";
        y=to_num(temp);
        ll g=__gcd(x,y);
        x/=g;
        y/=g;
    }
    if(left.empty())
        pf("%lld/%lld",x,y);
    else
    {
        ll l=to_num(left);
        l*=y;
        x+=l;
        ll g=__gcd(x,y);
        x/=g;
        y/=g;
        pf("%lld/%lld",x,y);
    }
}
