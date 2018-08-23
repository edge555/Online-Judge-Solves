#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n ;
	int cost[n];
	int type1[n];
	int cost1 = 1000000;
	int cost2 = 1000000;
	int cost3 = 1000000;

	for (int i = 0; i < n; ++i)
	{
		cin >> cost[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> type1[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (type1[i] == 1)
		{
			if (cost1 > cost[i])
			{
				cost1 = cost[i];
			}
		}
		else if(type1[i] == 2)
		{
			if (cost2 > cost[i])
			{
				cost2 = cost[i];
			}
		}
		else
		{
			if (cost3 > cost[i])
			{
				cost3 = cost[i];
			}
		}
	}

	if(cost1+cost2 > cost3)
	{
		cout << cost3 << endl;
	}
	else
	{
		cout << cost2 + cost1 << endl;
	}



	return 0;
}
