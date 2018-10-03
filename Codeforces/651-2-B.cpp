#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,i,k;
    vector<int>vec;
    vector<int>::iterator it;
    map<int,int>mp;
    map<int,int>::iterator it2;
    sf(n);
    rep0(i,n)
    {
        sf(k);
        mp[k]++;
    }
    while(1)
    {
        bool chk=false;
        for(it2=mp.begin();it2!=mp.end();it2++)
        {
            if(it2->se>0)
            {
                chk=true;
                break;
            }
        }
        if(!chk)
            break;
        for(it2=mp.begin();it2!=mp.end();it2++)
        {
            if(it2->se!=0)
            {
                k=it2->fi;
                vec.pb(k);
                mp[k]--;
            }
        }

    }
    int cnt=0;
    rep0(i,vec.size()-1)
    {
        if(vec[i]<vec[i+1])
            cnt++;
    }
    cout<<cnt;
}
