#include<bits/stdc++.h>
using namespace std;

long N,B,H,W;
long p,a;

int main()
{
    while(scanf("%d %d %d %d", &N, &B, &H, &W) == 4)
    {
        long cost = 0;
        for(int i = 0; i < H; i++)
        {
            scanf("%d", &p);
            for(int j = 0; j < W; j++)
            {
                scanf("%d", &a);
                if(a >= N && N * p <= B)
                    if(cost == 0 || N * p < cost)
                        cost = N * p;
            }
        }
        printf(cost == 0? "stay home\n" : "%d\n", cost);
    }
}
