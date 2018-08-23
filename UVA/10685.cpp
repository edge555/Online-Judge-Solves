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
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;

map<string,int>mp;
int par[10000];
int val[10000];

void intset(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        par[i]=i;
        val[i]=1;
    }
    mp.clear();
}

int findpar(int r)
{
    if(par[r]==r)
        return r;
    else
        return (par[r]=findpar(par[r]));
}

void chkset(int u,int v)
{
    int a=findpar(u);
    int b=findpar(v);
    if(a!=b)
    {
        par[b]=a;
        val[a]+=val[b];
    }
}

int main()
{
    int n,m,i;
    string a,b;

    while(scanf("%d %d",&n,&m) && (n|m))
    {
        intset(n);
        for(i=1;i<=n;i++)
        {
            cin>>a;
            mp[a]=i;
        }

        for(i=1;i<=m;i++)
        {
            cin>>a>>b;
            int u=mp[a];
            int v=mp[b];

            chkset(u,v);
        }

        int maxx=0;

        for(i=1;i<=n;i++)
        {
            if(par[i]==i && val[i]>maxx)
                maxx=val[i];
        }

       cout<<maxx<<endl;
    }
}
