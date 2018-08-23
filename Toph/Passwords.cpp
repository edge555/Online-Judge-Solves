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
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;
int main()
{
    string a;
    while (cin>>a)
    {
        int i;
        bool d=false,c=false,s=false;
        int cnt=0;
        for (i=0;i<a.size();i++)
        {
            if (a[i]>='a' && a[i]<='z')
                s=true;
            if (a[i]>='A' && a[i]<='Z')
                c=true;
            if (a[i]>='0' && a[i]<='9')
                d=true;
            if (c ==true && d==true && s==true)
            {
                cnt++;
                d=false;
                c=false;
                s=false;
            }
        }
        cout<<cnt<<endl;
    }
}
