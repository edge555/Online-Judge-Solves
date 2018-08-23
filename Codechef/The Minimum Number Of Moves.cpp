#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define INF (int)1e9
#define PI acos(-1.0)
#define sc scanf
#define pf printf
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;

int main()
{
	int k;
	cin>>k;
	while(k--)
	{
	    int n,i,minn,sum=0;
	    cin>>n;
	    int ara[n+1];
	     for(i=0;i<n;i++)
	     {
	     cin>>ara[i];
             if(i==0)
                 minn=ara[0];
	     if(ara[i]<minn)
                 minn=ara[i];
	     }
	     for(i=0;i<n;i++)
		 sum+=(ara[i]-minn);
	     cout<<sum<<endl;
	}
	return 0;
}
