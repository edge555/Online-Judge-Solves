#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,px,py,x,y;

	cin>>n;
	while (n!=0)
    {
		cin>>px>>py;
		while(n--)
		{
			cin>>x>>y;

			if (x==px || y==py)
				puts("divisa");
			else if (x<px && y>py)
				puts("NO");
			else if (x>px && y>py)
				puts("NE");
			else if (x>px && y<py)
				puts("SE");
			else if (x<px && y<py)
				puts("SO");
		}
		cin>>n;
	}
}
