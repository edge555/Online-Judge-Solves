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
    int n,i;
    cin>>n;
    int ara[n+1];
    for (i=1;i<=n;i++)
        ara[i]=0;
    for (i=0;i<2;i++)
    {
        int m,p;
        cin>>m;
        while (m--)
        {
           cin>>p;
           ara[p]=1;
        }
    }
    bool res=true;
    for (i=1;i<=n;i++)
    {
        if (ara[i]==0)
        {
          res=false;
          cout<<"Oh, my keyboard!"<<endl;
          break;
        }
    }
    if (res)
        cout<<"I become the guy."<<endl;
}
