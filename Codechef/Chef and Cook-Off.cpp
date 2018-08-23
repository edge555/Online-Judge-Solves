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
    ll n;
    cin>>n;
    while (n--)
    {
       int ara[100000],sum=0;
       for (int i=0;i<5;i++)
       {
           cin>>ara[i];
           sum+=ara[i];
       }
        if (sum==0)
            cout<<"Beginner"<<endl;
        else if (sum==1)
            cout<<"Junior Developer"<<endl;
        else if (sum==2)
            cout<<"Middle Developer"<<endl;
        else if (sum==3)
            cout<<"Senior Developer"<<endl;
        else if (sum==4)
            cout<<"Hacker"<<endl;
        else if (sum==5)
            cout<<"Jeff Dean"<<endl;

    }
}
