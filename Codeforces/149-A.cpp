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
bool func(int a,int b)
{
    return a>b;
}
int main()
{
    int ara[12],i,n,sum=0;
    cin>>n;
    for (i=0;i<12;i++){
        cin>>ara[i];
        sum+=ara[i];
    }
    if (sum<n)
    {
       cout<<"-1"<<endl;
       return 0;
    }
    sort(ara,ara+12,func);
    sum=0;
    for (i=0;;i++)
    {
    if (sum>=n)
        break;
    sum+=ara[i];
    }
    cout<<i<<endl;
}
