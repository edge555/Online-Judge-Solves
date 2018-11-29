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
//#define mp make_pair
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
    int n,m,i;
    cin>>n>>m;
    map<string,string>mp;
    string a="",b="";
    while (m--)
    {
        cin>>a>>b;
        mp[a]=b;
    }
    string s[10000];
    for (i=0;i<n;i++)
    {
        cin>>a;
        if(mp.find(a)!=mp.end())
        {
            if (a.size()==mp[a].size())
                s[i]=a;
            else
                s[i]=a.size()>mp[a].size()?mp[a]:a;
        }
    }
    for (i=0;i<n;i++)
    {
       cout<<s[i];
       if (i!=n-1)
            cout<<" ";
    }
}
