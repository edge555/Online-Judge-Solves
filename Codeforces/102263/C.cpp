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
int n,m,caps=0;
string last="";
vector<char>current;
string x;
int main()
{
    FAST;
    int i;
    cin>>n;
    if(n)
        cin>>last;
    string y;
    rep0(i,n-1)
    {
        cin>>y;
        last+=" ";
        last+=y;
    }
    cin>>m;
    rep0(i,m)
    {
        cin>>x;
        if(x=="CapsLock")
        {
            caps=1-caps;
            continue;
        }
        if(x=="Backspace")
        {
            if(current.size())
                current.pop_back();
            continue;
        }
        if(x=="Space")
        {
            current.push_back(' ');
            continue;
        }
        if(caps)
        {
            current.push_back(toupper(x[0]));
            continue;
        }
        current.push_back(x[0]);
    }
    int f=1,sz= min(current.size(),last.size());
    rep0(i,sz)
    {
        if(current[i]!=last[i])
        {
            f=0;
            break;
        }
    }
    int ans=((int)current.size()==(int)last.size()) && f;
    cout<<(ans?"Correct":"Incorrect")<<endl;
}
