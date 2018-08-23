#include<bits/stdc++.h>
using namespace std;
#define N 10000001
vector<int>prime;
bool mark[N];
int a[N];
void seive()
{
    long long int i;
    memset(mark,true,sizeof(mark));

    for(i=4;i<N;i+=2)
        mark[i]=false;


    for(i =3;i*i<N;i++)
    {
        if(mark[i])
        {
            for(int j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }

    prime.clear();
    int ans=0;
    for(i=2;i<N;i++)
    {
        a[i]=ans;
        if(mark[i])
        {
            prime.push_back(i);
            ans++;
        }
    }
}

int main()
{
    int t;
    seive();
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    cout<<a[n]<<endl;
    }
}
