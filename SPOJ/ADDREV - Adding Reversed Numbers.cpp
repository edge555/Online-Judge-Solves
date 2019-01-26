#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;

int rev(int x)
{
    int res=0;
	while (x>0)
	{
		res*=10;
		res+=(x%10);
		x/=10;
	}
	return res;
}

int main()
{
	int n;
   	cin>>n;
	while (n--)
	{
		int a,b;
		cin>>a>>b;
		printf("%d\n",rev(rev(a)+rev(b)));
	}
}
