
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
    int i;
    for (i=0;i<a.size();i++)
    {
        if (a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
        {
           a[i]=' ';
           a[i+1]=' ';
           a[i+2]=' ';
        }
    }
    for(i=a.size()-1;i>=0;i--)
    {
        if(a[i]==' '&& a[i]==a[i-1])
        {
            a.erase(a.begin()+i);
        }
    }
    if (a[0]!=' '){
        cout<<a<<endl;
        return 0;
    }

    else
    {
        for (i=1;i<a.size();i++)
            cout<<a[i];
    }
    cout<<endl;
}
