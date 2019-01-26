#include<bits/stdc++.h>
using namespace std;
struct act
{
	int first,second;
}act[100000];
bool func(struct act a,struct act b)
{
	if (a.second == b.second)
		return a.first<b.first;
	return a.second<b.second;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,fin=-1,cnt=0,i;
		cin>>n;
		for(i=0;i<n;i++)
			cin>>act[i].first>>act[i].second;

		sort(act,act+n,func);
		for(i=0;i<n;i++)
		{
			if(act[i].first>=fin)
			{
				cnt++;
				fin=act[i].second;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
