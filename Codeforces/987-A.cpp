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
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;
int main()
{
    vector<string>vec;
    vector<string>::iterator it;
    vec.pb("purple");
    vec.pb("green");
    vec.pb("blue");
    vec.pb("orange");
    vec.pb("red");
    vec.pb("yellow");

    string a;
    int n;
    cin>>n;
    while (n--)
    {
        cin>>a;
        it=find(vec.begin(),vec.end(),a);
        vec.erase(it);
    }
    map<string,string>mp;
    map<string,string>::iterator it2;
    mp["purple"]="Power";
    mp["green"]="Time";
    mp["blue"]="Space";
    mp["orange"]="Soul";
    mp["red"]="Reality";
    mp["yellow"]="Mind";
    cout<<vec.size()<<endl;
    for (it=vec.begin();it!=vec.end();it++)
    {
        it2=mp.find(*it);
        cout<<it2->second<<endl;
    }
}
