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
    getchar();
    string a="";
    cin>>a;
    int i,x,res=0;
    for (i=0;i<a.size();)
    {
        if (a[i]=='x')
        {
            i++;
            x=0;
            while (a[i]=='x')
            {
                i++;
                x++;
            }
            if (x>1)
                res+=x-1;
        }
        else
            i++;
    }
    cout<<res<<endl;
}
