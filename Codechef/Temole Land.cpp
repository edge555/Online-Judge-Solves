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
    int t,k=0,i,j,n;
    cin>>t;
    {
        for(i=1;i<=t;i++)
        {
            cin>>n;
            int ara[n+1];
            for(j=0;j<n;j++)
                cin>>ara[j];
            if(n%2==0)
                cout<<"no"<<endl;
            else
            {
                if(ara[0]!=1)
                     cout<<"no"<<endl;
                else
                {
                    for(j=0;j<n/2;j++)
                    {
                        if(ara[j]==(ara[j+1]-1))
                            k=0;
                        else
                        {
                            cout<<"no"<<endl;
                            k=1;
                            break;
                        }
                    }
                    if(k==0)
                    {
                        for(j=n-1;j>n/2;j--)
                        {
                            if(ara[j]==(ara[j-1]-1))
                                k=0;
                            else
                            {
                                cout<<"no"<<endl;
                                k=1;
                                break;
                            }
                        }
                    }
                    if(k==0)
                        cout<<"yes"<<endl;
                }
            }
        }
    }
}
