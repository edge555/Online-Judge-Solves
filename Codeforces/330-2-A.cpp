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
char ara[100][100];
int main()
{
    int r,c;
    cin>>r>>c;
    getchar();
    int i,j;
    int cnt=0,p=0;
    for (i=0;i<r;i++)
        for (j=0;j<c;j++)
            cin>>ara[i][j];
    for (i=0;i<r;i++)
    {
        cnt=0;
        for (j=0;j<c;j++)
        {
        if (ara[i][j]=='S')
            cnt++;
        }
        if (cnt==0)
        {
           for (j=0;j<c;j++)
           {
                if (ara[i][j]=='.')
                    p++;
                ara[i][j]=1;
           }
        }
    }
    for (j=0;j<c;j++)
    {
       cnt=0;
       for (i=0;i<r;i++)
       {
           if (ara[i][j]=='S')
                cnt++;
       }
       if (cnt==0)
       {
          for (i=0;i<r;i++)
          {
              if (ara[i][j]=='.')
                    p++;
              ara[i][j]=1;
          }
       }
    }
    cout<<p<<endl;
}
