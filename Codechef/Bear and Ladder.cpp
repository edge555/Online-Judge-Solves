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
        while (n--)
        {
           ll a,b;
           cin>>a>>b;
           if (a==1)
           {
              if (b==2 || b==3)
                cout<<"YES"<<endl;
              else
                cout<<"NO"<<endl;
           }
           else if (b==1)
           {
              if (a==2 || a==3)
                cout<<"YES"<<endl;
              else
                cout<<"NO"<<endl;
           }
           else if (a==2)
           {
              if (b==1 || b==4)
                cout<<"YES"<<endl;
              else
                cout<<"NO"<<endl;
           }
           else if (b==2)
           {
              if (a==1 || a==4)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
           }
           else
           {
              if (a%2==0)
              {
                  if (b==a-1 || b==a+2 || b==a-2)
                    cout<<"YES"<<endl;
                  else
                    cout<<"NO"<<endl;
              }
              else
              {
                if (b==a-2 || b==a+1 || b==a+2)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
              }
           }
       }
}
