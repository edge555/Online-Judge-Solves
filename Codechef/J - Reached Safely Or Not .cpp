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
    for (ll i=1;i<=n;i++)
    {
        ll m,n,x=0,y=0,q,p;
        cin>>m>>n;
        cin>>p>>q;
        ll s;
        cin>>s;
        string a="";
        cin>>a;
        for (ll j=0;j<a.size();j++)
        {
            if (a[j]=='U')
                y++;
            else if (a[j]=='D')
                y--;
            else if (a[j]=='R')
                x++;
            else
                x--;
        }
        cout<<"Case "<<i<<": ";
        if ((x==p) && (y==q))
            cout<<"REACHED"<<endl;
        else if (x<0 || x>m || y<0 || y>n)
            cout<<"DANGER"<<endl;
        else
            cout<<"SOMEWHERE"<<endl;
    }
}
