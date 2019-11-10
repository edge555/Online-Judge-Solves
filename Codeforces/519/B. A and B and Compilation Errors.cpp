#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int i,n,k,x,y;
    sf(n);
    map<int,int>mp,mp2,mp3;
    map<int,int>::iterator it;
    for (i=0;i<n;i++)
    {
        sf(k);
        mp[k]++;
    }
    for (i=0;i<n-1;i++)
    {
        sf(k);
        mp2[k]++;
    }

    for (i=0;i<n-2;i++)
    {
        sf(k);
        mp3[k]++;
    }

    for (it=mp.begin();it!=mp.end();it++)
    {
        int p=it->first;
        if(mp[p]!=mp2[p])
        {
            x=p;
            break;
        }
    }
    for (it=mp2.begin();it!=mp2.end();it++)
    {
        int p=it->first;
        if(mp2[p]!=mp3[p])
        {
            y=p;
            break;
        }
    }
    pf("%d\n%d",x,y);
}
