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
#define N 1005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("outopput.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int ara[N][N];
ll histogram2D(int hist[],int n)
{
	int i=0,maxarea=0,topp,area;
	stack<int>s;
	while(i<n)
    {
		if(s.empty() || hist[s.top()]<=hist[i])
			s.push(i++);
        else
        {
			topp=s.top();
			s.pop();
			area=hist[topp]*(s.empty()?i:i-s.top()-1);
            maxarea=max(maxarea,area);
		}
	}
	while(!s.empty())
	{
		topp=s.top();
		s.pop();
		area=hist[topp]*(s.empty()?i:i-s.top()-1);
		maxarea=max(maxarea,area);
	}
	return maxarea;
}
void histogram(int n,int m)
{
    int i,j;
    rep(i,n-1)
    {
        rep0(j,m)
        {
            if(ara[i][j]==1)
                ara[i][j]+=ara[i-1][j];
        }
    }
    ll ans=0;
    rep0(i,n)
        ans=max(ans,histogram2D(ara[i],m));
    printf("%lld\n",ans*3);
}
int main()
{
    int tc;
    sf(tc);
	while(tc--)
    {
		int i,j,k,n,m;
		sff(n,m);
		char ch;
		rep0(i,n)
        {
			rep0(j,m)
			{
				cin>>ch;
				if(ch=='R')
					ara[i][j]=0;
				 else
					ara[i][j]=1;
			}
		}
		histogram(n,m);
	}
}
