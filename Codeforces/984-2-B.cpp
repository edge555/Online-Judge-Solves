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

int dx[] = {0,0,1,-1,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,-1,1};
char ara[105][105];
int n,m;
int flag=1;
bool valid(int x,int y)
{
    if(x>=0 || y>=0 || x<n || y<m)
    {
        return true;
    }
    return false;
}


void chk(int i,int j,int v)
{
    int cnt = v;
    for(int ii=0;ii<8;ii++){
        int x=i+dx[ii];
        int y=j+dy[ii];
        if(valid(x,y)){
            if(ara[x][y]=='*'){
                cnt--;
            }
        }
    }
    if(cnt!=0)
    {
        flag = 0;
    }
}

int main()
{
    int i,j;
    map<char,int>mm;
    mm['1'] = 1;
    mm['2'] = 2;
    mm['3'] = 3;
    mm['4'] = 4;
    mm['5'] = 5;
    mm['6'] = 6;
    mm['7'] = 7;
    mm['8'] = 8;
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>ara[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(mm[ara[i][j]]!=0){
                chk(i,j,mm[ara[i][j]]);
            }
            else if(ara[i][j]=='.'){
                chk(i,j,0);
            }
        }
    }
    if(flag==0)
        cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
    }
}
