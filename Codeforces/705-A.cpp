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
    string a= "I hate it",res="";
    int n,i;
    cin>>n;
    if (n==1)
    {
        cout<<a<<endl;
        return 0;
    }
    else
    {
        for (i=1;i<=n;i++)
        {
            if (i%2==1 && i!=n)
                cout<<"I hate that ";
            if (i==n)
            {
                if (n%2==0)
                    cout<<"I love it";
                else
                    cout<<"I hate it";
            }
            if(i%2==0 && i!=n)
                cout<<"I love that ";
        }
        cout<<endl;
    }
}
