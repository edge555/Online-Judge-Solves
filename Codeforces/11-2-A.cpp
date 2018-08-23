#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,d,r1=0,r2,ans=0,t;
	cin>>n>>d;
	while (n--)
	{
		cin>>r2;
		if (r1>=r2)
        {
        t=(r1-r2)/d+1;
        r2+=t*d;
        ans+=t;
        }
		r1=r2;
	}
	cout<<ans<<endl;
}
