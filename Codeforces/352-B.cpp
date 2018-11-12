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
    int i,n,k;
    sf(n);
    vector<int>vec[100001];
    set<int>st;
    set<int>::iterator it;
    rep0(i,n)
    {
        sf(k);
        vec[k].pb(i);
        st.insert(k);
    }
    for(it=st.begin();it!=st.end();)
    {
        int p=*it;
        sort(all(vec[p]));
        bool chk=true;
        if(vec[p].size()>=3)
        {

            int x,y,z;
            x=vec[p][0];
            y=vec[p][1];
            z=y-x;
            reps(i,1,vec[p].size()-1)
            {
                if(vec[p][i]-vec[p][i-1]!=z)
                {
                    chk=false;
                    break;
                }
            }
        }
        if(!chk)
            st.erase(it++);
        else
            ++it;
    }
    cout<<st.size()<<endl;
    for(it=st.begin();it!=st.end();it++)
    {
        int p=*it;
        if(vec[p].size()==1)
            cout<<p<<" 0\n";
        else
            cout<<p<<" "<<vec[p][1]-vec[p][0]<<endl;
    }
}
