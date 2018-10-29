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
   int n,m;
   cin>>n>>m;
   int ara[m+1];
   for (int i=0;i<m;i++)
    cin>>ara[i];
    sort(ara,ara+m);
   int diff=1000000000,mn,mx;
   for (int i=0;i<m-n+1;i++)
   {
        if (diff>ara[i+n-1]-ara[i])
            diff=ara[i+n-1]-ara[i];
   }
   cout<<diff<<endl;
}
