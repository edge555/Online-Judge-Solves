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
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int i,n,k,sum=0;
    map<int,int>mp;
    map<int,int>::iterator it;
    rep0(i,5)
    {
        sf(k);
        mp[k]++;
        sum+=k;
    }
    if(mp.size()==5)
    {
        cout<<sum;
        return 0;
    }
    sum=0;
    if(mp.size()==4)
    {
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->se==1)
                sum+=it->fi;
        }
        cout<<sum;
    }
    else if(mp.size()==3)
    {
        int cnt=0,x=INT_MIN;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->se>=2)
            {
                cnt++;
                x=max(x,it->fi);
            }
            else
                sum+=it->fi;
        }
        if(cnt==1)
        {
            cout<<sum;
            return 0;
        }
        else
        {
            sum=0;
            for(auto it=mp.begin();it!=mp.end();it++)
            {
                if(it->fi!=x)
                {
                    int p=it->se;
                    sum+=(it->fi*p);
                }
            }
            cout<<sum;
        }
    }
    else if(mp.size()==2)
    {
        int x,y;
        bool chk=false;
        it=mp.begin();
        if(it->se>3)
            chk=true;
        it++;
        if(it->se>3)
            chk=true;
        if(!chk)
        {
            it=mp.begin();
            int x=it->fi;
            x*=it->se;
            it++;
            int y=it->fi;
            y*=it->se;
            cout<<min(x,y);
        }
        else
        {
            it=mp.begin();
            int x=0;
            x+=it->fi;
            it++;
            x+=it->fi;
            cout<<x;

        }
    }
    else
    {
        it=mp.begin();
        int x=it->fi;
        x*=2;
        cout<<x;
    }
}
