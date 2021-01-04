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
    string s;
    cin>>s;
    string temp="ABC";
    do{
        for(int i=0;i<s.length();i++)
        {
            if(s.substr(i,3)==temp)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }while(next_permutation(temp.begin(),temp.end()));

    cout<<"No"<<endl;
}
