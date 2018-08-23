#include <bits/stdc++.h>
using namespace std;
int ara[1000000];
int main()
{
    memset(ara,0,sizeof(ara));
    long long int i,n,a,b;
    cin>>n;
    while (n--)
    {
        int cnt=0;
        memset(ara,0,sizeof(ara));
        for (i=0;i<3;i++)
        {
            cin>>a>>b;
            for (int j=a;j<=b;j++)
            {
                if (ara[j]==0){
                    ara[j]=1;
                    cnt++;
            }
        }

        }
        cout<<cnt<<endl;
    }
}
