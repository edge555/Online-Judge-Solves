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
#define pb push_back
#define INF (int)1e9
#define PI acos(-1.0)
#define sc scanf
#define pf printf
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long int ll;
using namespace std;
ll ara[100005],par[100005];
map<string,long int>mp;

long int findpar(long long int f){
    if (par[f]==f)
        return f;
    return par[f]=findpar(par[f]);
}

void res(long int m,long int n)
{
   ll p1=findpar(m);
   ll p2=findpar(n);

   if (p1!=p2)
   {
       par[p2]=p1;
       ara[p1]+=ara[p2];
   }
   cout<<ara[p1]<<endl;
}

int main()
{
    ll n;
    cin>>n;
    while (n--){
    ll t,i;
    cin>>t;
    mp.clear();
    ll a=0;
    for (i=0;i<t;i++)
    {
        string s1="",s2="";
        cin>>s1>>s2;


        if (mp.find(s1)==mp.end())
        {
           par[a]=a;
           ara[a]=1;
           mp[s1]=a++;
        }
        if (mp.find(s2)==mp.end())
        {
           par[a]=a;
           ara[a]=1;
           mp[s2]=a++;
        }
        ll x,y;
        x=mp[s1];
        y=mp[s2];

        res(x,y);
    }
    }
}
