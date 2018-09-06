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
    int tc;
    sf(tc);
    while(tc--)
    {
        int n,i,k;
        sf(n);
        bool sev=true;
        bool ok=true,sorted=true;
        stack<int>s;
        queue<int>q;
        set<int>st;
        rep0(i,n)
        {
            sf(k);
            if(i<n/2)
            {
                q.push(k);
                st.insert(k);
            }
            else if(i>n/2)
                s.push(k);
            else
            {
                st.insert(k);
                if(k!=7)
                    sev=false;
            }
        }
        if(st.size()!=7)
        {
            puts("no");
            continue;
        }
        int a=28;
        for (auto it=st.begin();it!=st.end();it++)
            a-=*it;
        if(a!=0)
        {
            puts("no");
            continue;
        }
        if(!sev)
            puts("no");
        else
        {
            priority_queue<int>pq;
            while(!s.empty())
            {
                int y=s.top();
                int x=q.front();
                if(x==y)
                {}
                else
                {
                    ok=false;
                    break;
                }
                if(pq.empty())
                    pq.push(x);
                else
                {
                    int k=pq.top();
                    if(k>x)
                    {
                        sorted=false;
                        break;
                    }
                    else
                        pq.push(x);
                }
                q.pop();
                s.pop();
            }
            if(ok && sorted)
                puts("yes");
            else
                puts("no");
        }
    }
}
