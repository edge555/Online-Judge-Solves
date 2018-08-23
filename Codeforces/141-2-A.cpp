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
    string a="",b="",c="";
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    if (a.size()+b.size()!=c.size()){
        cout<<"NO"<<endl;
        return 0;
    }
    else{

        string d="";
        d=a+b;
        bool res=true;
        sort(d.begin(),d.end());
        sort(c.begin(),c.end());
        for (int i=0;i<d.size();i++)
        {
           if (d[i]!=c[i])
                res=false;
        }
        if (res)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
