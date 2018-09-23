#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m;
int dp[105][105];
bool visited[105][105];
int calcLCS(int a[],int b[],int i,int j)
{

	if(i==n || j==m)
        return 0;
	if(visited[i][j])
        return dp[i][j];

	int ans=0;
	if(a[i]==b[j])
        ans=1+calcLCS(a,b,i+1,j+1);
	else
	{
		int val1=calcLCS(a,b,i+1,j);
		int val2=calcLCS(a,b,i,j+1);
		ans=max(val1,val2);
	}
	visited[i][j]=1;
	dp[i][j]=ans;
	return dp[i][j];
}
int main()
{
	int j=1,i;
	while(1)
    {
        sff(n,m);
        if(n+m==0)
            break;
        int ara[n+1],ara2[m+1];
        rep0(i,n)
            cin>>ara[i];
        rep0(i,m)
            cin>>ara2[i];

        memset(dp,0,sizeof(dp));
        memset(visited,0,sizeof(visited));
        int k=calcLCS(ara,ara2,0,0);

        pf("Twin Towers #%d\n",j++);
        pf("Number of Tiles : %d\n\n",k);
    }

}
