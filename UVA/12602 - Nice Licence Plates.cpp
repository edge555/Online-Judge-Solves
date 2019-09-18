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
int getval(string a)
{
    int i,sum=0,j=0;
    for(i=a.size()-1;i>=0;i--,j++)
    {
        int x=pow(26,j);
        int y=a[i]-'A';
        sum+=(x*y);
    }
    return sum;
}
int getnum(string a)
{
    int i=0,sum=0;
    while(a[i]=='0')
        i++;
    while(i<a.size())
    {
        sum*=10;
        sum+=a[i++]-'0';
    }
    return sum;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n;
        string a,b="",c="";
        cin>>a;
        bool chk=false;
        rep0(i,a.size())
        {
            if(a[i]=='-')
            {
                chk=true;
                i++;
            }
            if(!chk)
                b+=a[i];
            else
                c+=a[i];
        }
        int p=getval(b);
        int q=getnum(c);
        puts(abs(p-q)<=100?"nice":"not nice");
    }
}
