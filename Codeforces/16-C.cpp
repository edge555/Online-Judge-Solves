#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	int k=__gcd(x,y);
	x/=k;
	y/=k;
	int q=min(a/x,b/y);
	cout<<q*x<<" "<<q*y<<endl;
}
