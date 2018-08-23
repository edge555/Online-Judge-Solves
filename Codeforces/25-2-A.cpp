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
    int n,i,ara[100000];
    int e=0,l,t;
    cin>>n;
    for (i=0;i<n;i++){
        cin>>ara[i];
        if (ara[i]%2==0){
            e++;
            l=i+1;
        }
        else if (ara[i]%2==1)
            t=i+1;
    }
    if (e==1)
        cout<<l<<endl;
    else
        cout<<t<<endl;
}
