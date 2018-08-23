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
        int k,ax=0,ac=0,bx=0,bc=0,dx=0,dc=0;
        cin>>k;
        while (k--)
        {
           int c,l,x;
           cin>>c>>l>>x;
           if (l==1)
           {
              if (x>ax)
              {
                  ax=x;
                  ac=c;
              }
              else if(x==ax)
              {
                 ax=x;
                 ac=min(ac,c);
              }
           }
           else if (l==2)
           {
              if (x>bx)
              {
                  bx=x;
                  bc=c;
              }
              else if(x==bx)
              {
                 bx=x;
                 bc=min(bc,c);
              }
           }
           else if (l==3)
           {
              if (x>dx)
              {
                  dx=x;
                  dc=c;
              }
              else if(x==dx)
              {
                 dx=x;
                 dc=min(dc,c);
              }
           }

        }
        cout<<ax<<" "<<ac<<endl;
        cout<<bx<<" "<<bc<<endl;
        cout<<dx<<" "<<dc<<endl;
    }
}
