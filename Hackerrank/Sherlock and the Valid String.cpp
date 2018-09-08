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
    string a;
    cin>>a;
    map<char,int>mp;
    map<char,int>::iterator it;
    set<int>st;
    set<int>::iterator it2;
    vector<int>vec;
    int i;
    for (i=0;i<a.size();i++)
        mp[a[i]]++;

    for (it=mp.begin();it!=mp.end();it++)
    {
        int k=it->second;
        vec.pb(k);
    }
    if(st.size()>2)
        puts("NO");
    else
    {
        if(st.size()==1)
            puts("YES");
        else
        {
            int cnt1=0,cnt2=0;
            for(it2=st.begin();it2!=st.end();it2++)
            {
                if(it2==st.begin())
                {
                    for(it=mp.begin();it!=mp.end();it++)
                        if(it->second==*it2)
                            cnt1++;

                }
                else
                {
                    for(it=mp.begin();it!=mp.end();it++)
                        if(it->second==*it2)
                            cnt2++;
                }
            }
            if(cnt1==1||cnt2==1)
            {
                puts("YES");
                return 0;
            }
            else
            {
                puts("NO");
                return 0;
            }
        }
    }
}
