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
    int ans=0,k;
    char m[100][100];
	for(int i=0;i<8;i++)
	{
		gets(m[i]);
		k=1;
		for (int j=0;j<8;j++)
			if (m[i][j]=='W')
				k=0;
		ans+=k;
	}
	for (int j=0;j<8;j++)
	{
		k=1;
		for (int i=0;i<8;i++)
			if (m[i][j]=='W')
				k=0;
		ans+=k;
	}
	if (ans==16)
		ans=8;

	cout<<ans<<endl;
}
