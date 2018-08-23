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
#define N 100000009
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
bool mark[N];
vector<ll>prime;
void seive()
{
    memset(mark,true,sizeof(mark));
    mark[0] = mark[1] = false;
    for(int i=4;i<=N;i+=2){
        mark[i] = false;
    }
    for(int i=3;i*i<N;i++){
        if(mark[i]){
            for(int j=i*i;j<N;j+=i*2){
                mark[j] = false;
            }
        }
    }
    prime.clear();
    prime.pb(0);
    prime.push_back(2);
    for(int i=3;i<N;i++){
        if(mark[i])
            prime.push_back(i);
    }
    for(int i=1;i<prime.size();i++){
        prime[i]+=prime[i-1];
    }
}


int main(){
    int test;
    in1(test);
    seive();
    for(int i=0;i<test;i++){
        int l,r;
        in2(l,r);
        cout<<prime[r]-prime[l-1]<<endl;
    }
}

