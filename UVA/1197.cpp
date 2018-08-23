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
int rrank[100000];

void intset(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        par[i]=i;
        rrank[i]=1;
    }
}

int findpar(int n)
{
    if(n!=par[n])
        par[n]=findpar(par[n]);
    return
        par[n];
}

void chkset(int x,int y)
{
    int rx,ry;
    rx=findpar(x);
    ry=findpar(y);
    if(rx == ry)
        return;
    if(rrank[rx]>rrank[ry])
    {
        rrank[rx]+=rrank[ry];
        par[ry]=rx;
    }
    else
    {
        rrank[ry]+=rrank[rx];
        par[rx]=ry;
    }
}

int main()
{
    int p,q,qs,ele,per;
    int z;
    while(scanf("%d %d",&p, &q))
    {
    int  cnt= 0;
        if(!p && !q)
            break;
        intset(p);
        for(int s=1;s<=q;s++)
        {
            cin>>qs;
            for(int x=1;x<=qs;x++)
            {
                cin>>per;
                if(x==1)
                    ele=per;
                else
                    chkset(ele,per);
        }
    }
    z=findpar(0);
    for(int j=0;j<p;j++)
        if(findpar(j)==z)
           cnt++;
    cout<<cnt<<endl;
    }
    return 0;
}
