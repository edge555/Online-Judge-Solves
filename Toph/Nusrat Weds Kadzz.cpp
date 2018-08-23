#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,a;
    sf(n);
    map<int,int>mp;
    map<int,int>::iterator it;
    while(n--)
    {
        sf(a);
        if(mp.find(a)==mp.end())
            mp[a]=1;
        else
            mp[a]++;
    }
    int mx=100,k;
    for (it=mp.begin();it!=mp.end();it++)
        mx=min(mx,it->second);
    bool chk=false;
    for (it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==mx && chk==true)
        {
            puts("Sorry Kadzz!");
            return 0;
        }
        else if(it->second==mx && chk==false)
        {
            chk=true;
            k=it->first;
        }
    }
    if(chk=true && mx==1)
    {
        pf("%d\n",k);
        puts("Nusrat weds Kadzz!");
    }
    else if(mx>1)
        puts("Sorry Kadzz!");
}
