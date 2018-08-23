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
    int a,b,c,cnt=0;

    cin>>a>>b>>c;
    if (a==1)
        cnt++;
    if (b==1)
        cnt++;
    if (c==1)
        cnt++;

    if (cnt==1)
    {
    if (b==1)
       cout<<max(a,c)*(b+min(a,c))<<endl;
    else if (a==1)
        cout<<(b+1)*c<<endl;
    else if (c==1)
        cout<<a*(b+1)<<endl;
    }
    else if (cnt==3)
        cout<<"3"<<endl;
    else if (cnt==2)
    {
       if (a==1 && b==1)
            cout<<2*c<<endl;
       else if (b==1 && c==1)
            cout<<2*a<<endl;
       else if (a==1 && c==1)
        cout<<2+b<<endl;
    }
    else if (cnt==0)
        cout<<a*b*c<<endl;
}
