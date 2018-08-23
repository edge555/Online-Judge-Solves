#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long int ll;
using namespace std;

int main()
{
       int n;
       while (1)
       {
        cin>>n;
        if(n==0)
            break;
	priority_queue<int,vector<int>,greater<int>> pq;
	while (n--)
        {
	     int x;
	     cin>>x;
	     pq.push(x);
	}

	int total=0,cost=0;
	while (pq.size()>1)
        {
	     total=pq.top();
	     pq.pop();

  	     total+=pq.top();
	     pq.pop();

	     cost+=total;
	     pq.push(total);
	}
	cout<<cost<<endl;
	}
}
