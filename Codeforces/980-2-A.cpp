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
    string a="";
    cin>>a;

    int i,p=0,l=0;
    for (i=0;i<a.size();i++)
    {
        if (a[i]=='-')
            l++;
        else
            p++;
    }
    if (l==a.size() || p==a.size())
        cout<<"YES"<<endl;
    else
    {
        float k;
        int r=l/p;
        k=ceil(l/(p*1.0));
        if (k==r)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
