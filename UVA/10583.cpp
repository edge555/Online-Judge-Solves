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

int par[100000];
int rnk[100000];
int ans;
void makeset(int n)
{
  for (int i=0;i<n;i++)
  {
      par[i]=i;
      rnk[i]=0;
  }
  ans=n;
}

int findpar(int x)
{
   if(par[x]!=x)
        par[x]=findpar(par[x]);
   return par[x];
}

bool sameset(int p,int q)
{
  return findpar[p]==findpar[q];
}


void chk(int x,int y)
{
    if(!sameset(x,y))
    {
        if (rnk[x]>rnk[y])
            par[y]=x;
        else
        {
            par[x]=y;
            if (rnk[y]==rnk[x])
                rnk[y]++;
        }
        ans--;
    }
}
void dsu(int x,int y)
{
    chk(findpar(x),findpar(y));
}
int main()
{
    int k=1;
    while(1)
    {
        int n,m;
        in2(n,m);
        if (n==0 && m==0)
            break;
        makeset(n);
        while (m--)
        {
            int i,j;
            in2(i,j);
            dsu(i,j);
        }
        printf ("Case %d: %d\n",k,ans);
        k++;
    }
}
