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
#define N 2005
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
int ara[N],prevv[N];
int histogram(int n)
{
    int area=0,maxarea=0;
    stack<int>s;
    int i,topp;
    for(i=1;i<=n;)
    {
        if(s.empty() || ara[s.top()]<=ara[i])
            s.push(i++);
        else
        {
            topp=s.top();
            s.pop();
            if(s.empty())
                area=ara[topp]*(i-1);
            else
                area=ara[topp]*(i-s.top()-1);
            maxarea=max(maxarea,area);
        }
    }
    while(s.empty())
    {
        topp=s.top();
        s.pop();
        if(s.empty())
            area=ara[topp]*(i-1);
        else
            area=ara[topp]*(i-s.top()-1);
        maxarea=max(maxarea,area);
    }
    return maxarea;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j,n,m;
        sff(n,m);
        getchar();
        mem(ara,0);
        int ans=0;
        string a;
        rep0(i,n)
        {
            cin>>a;
            rep0(j,m)
            {
                if(a[j]=='0')
                    ara[j+1]++;
                else
                    ara[j+1]=0;
            }
            ans=max(ans,histogram(m));
        }
        pf("Case %d: %d\n",t,ans);
    }
}