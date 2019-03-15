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
ll ans,n,d;
unordered_map<string,bool>mp;
string get(string a,int i)
{
    int j;
    string s="";
    rep0(j,a.size())
    {
        if(j!=i)
            s+=a[j];
    }
    return s;
}
string numtostr(ll n)
{
    string s="";
    while(n!=0)
    {
        s+=(n%10)+'0';
        n/=10;
    }
    reverse(all(s));
    return s;
}
ll strtonum(string a)
{
    ll num=0,i;
    rep0(i,a.size())
    {
        num*=10;
        num+=a[i]-'0';
    }
    return num;
}

int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        cin>>n>>d;
        string b=numtostr(n),a="";
        int i,len=b.size();
        char c=d+'0';
        while(1)
        {
            if(b.empty())
                break;
            char ch=c;
            for(i=0;i<b.size();i++)
                ch=min(ch,b[i]);
            if(ch==c)
                break;
            a+=ch;
            string temp="";
            bool chk=false;
            for(i=0;i<b.size();i++)
            {
                if(chk)
                    temp+=b[i];
                if(b[i]==ch)
                    chk=true;
            }
            b=temp;
        }
        while(a.size()!=len)
            a+=c;
        cout<<a<<endl;
    }
}
