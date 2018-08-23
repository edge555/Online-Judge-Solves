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
    int arax[10000],aray[10000],araz[10000];
    int n,i,sumx=0,sumy=0,sumz=0;
    int a,b,c;
    cin>>n;
    for (i=0;i<n;i++)
    {
       cin>>arax[i]>>aray[i]>>araz[i];
       sumx+=arax[i];
       sumy+=aray[i];
       sumz+=araz[i];
    }
    if (sumx==0 && sumy==0 && sumz==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
