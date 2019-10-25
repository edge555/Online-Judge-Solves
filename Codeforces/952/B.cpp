#include<bits/stdc++.h>
using namespace std;
int main()
{
	string t;
	for(int i=0;i<10;i++)
	{
		cout<<i<<endl;
		getline(cin,t);
		if(t!="no")
		{
			if(t=="great"||t=="cool"||t=="not bad"||t=="don't think so"||t=="don't touch me")
				cout<<"normal"<<endl;
			else
				cout<<"grumpy"<<endl;
		}
	}
}
