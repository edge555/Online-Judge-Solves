#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long int ll;
using namespace std;
#define N 1000001
set<int>st;
set<int>::iterator it;
bool mark[N];
void seive()
{
    int i;
    memset(mark,true,sizeof(mark));
    mark[1]=false;
    for(i=4;i<=N;i+=2)
        mark[i]=false;

    for(i=3;i*i<=N;i++)
    {
        if(mark[i])
        {
            for(int j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }

}
int main()
{
    seive();
    int i;
    for (i=1;i<=N;i++)
    {
        if(mark[i]==false)
            st.insert(i);
    }
    int k;
    sf(k);
    int l=k/2;
    for (i=l;i>=4;i--)
    {
        if(st.find(i)!=st.end())
        {
            int p=k-i;
            if(st.find(p)!=st.end())
            {
                pf("%d %d\n",i,p);
                break;
            }
        }
    }
}
