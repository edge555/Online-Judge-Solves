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
    int n;
    cin>>n;
    int ara[n+1],i;
    for (i=0;i<n;i++)
    {
       cin>>ara[i];
    }
    int l=ara[0],h=ara[0],cnt=0;
    for (i=1;i<n;i++)
    {
       if (ara[i]>h)
       {
           h=ara[i];
           cnt++;
       }
       else if (ara[i]<l)
       {
           l=ara[i];
           cnt++;
       }
    }
    cout<<cnt<<endl;
}
