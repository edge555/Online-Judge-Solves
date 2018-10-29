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
#define mpp make_pair
#define pb push_back
#define INF (int)1e9
#define PI acos(-1.0)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;
int main()
{
    int k,b;
    cin>>k>>b;
    string a="",res="";
    cin>>a;
    int i,j,cnt=0;
    for (i=0;i<k-b;i++)
    {
       if(a[i]=='.' || a[i+b]=='.')
            cnt++;
       else if(a[i]=='.' && a[i+b]=='.')
            cnt++;
       if(a[i]!=a[i+b])
            cnt++;
       if(cnt!=0)
       {
            for (i=0;i<k;i++)
            {
                (a[i]=='.' && a[i+b]=='.')
                {
                    a[i]='1';
                    a[i+b]='0';
                }   
                else if(a[i]!='.' && a[i+b]=='.')
                {
                    if(a[i]=='1')
                        a[i+b]='0';
                    else
                        a[i+b]='1';
                }   
                else if(a[i]=='.' && a[i+b]!='.')
                {
                    if(a[i+b]=='1')
                        a[i]='0';
                    else
                        a[i]='1';
                }
            }    
            cout<<a<<endl;
            return 0;

        }
    }
    cout<<"no"<<endl;
}
