#include<bits/stdc++.h>
using namespace std;
#define N 100005

bool mark[N];
int ara[N];
void seive()
{
    long long int i;
    memset(mark,true,sizeof(mark));

    for(i=4;i<N;i+=2)
        mark[i]=false;


    for(i=3;i*i<N;i++)
    {
        if(mark[i])
        {
            for(int j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }


    int ans=0;
    for(i=2;i<N;i++)
    {
        ara[i]=ans;
        if(mark[i])
            ans++;
    }
}

int main()
{
    int t,i,a,b;
    seive();
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
    scanf ("%d %d",&a,&b);
    cout<<"Case "<<i<<": "<<ara[b+1]-ara[a]<<endl;
    }
}
