#include<bits/stdc++.h>
using namespace std;

long long int N,B,H,W;
long long int p,a;

int main()
{
    while(cin>>N>>B>>H>>W)
    {
        long long int cost=0;
        for(int i=0;i<H;i++)
        {
            cin>>p;
            for(int j=0;j<W;j++)
            {
                cin>>a;
                if(a>=N &&N*p<=B)
                    if(cost==0 || N*p<cost)
                        cost=N*p;
            }
        }
        printf(cost==0?"stay home\n":"%d\n",cost);
    }
}
