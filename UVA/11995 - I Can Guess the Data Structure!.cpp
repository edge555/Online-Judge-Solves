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
    int n;
    while(cin>>n)
    {
        int i,k,p,cnt=0,a,b;
        stack<int>s;
        queue<int>q;
        priority_queue<int>pq;
        bool confused=false,qq=true,stk=true,pqq=true;;
        rep0(i,n)
        {
            cnt=0;
            sff(a,b);
            if(a==1)
            {
                if(qq)
                    q.push(b);
                if(stk)
                    s.push(b);
                if(pqq)
                    pq.push(b);
            }
            else
            {
                if(s.empty() || s.top()!=b)
                    stk=false;
                if(pq.empty() || pq.top()!=b)
                    pqq=false;
                if(q.empty() || q.front()!=b)
                    qq=false;
                if(!s.empty())
                    s.pop();
                if(!q.empty())
                    q.pop();
                if(!pq.empty())
                    pq.pop();
            }
        }
        if(!qq && !stk && !pqq)
            puts("impossible");
        else
        {
            cnt=0;
            if(qq)
                cnt++;
            if(pqq)
                cnt++;
            if(stk)
                cnt++;
            if(cnt!=1)
                puts("not sure");
            else
            {
                if(qq)
                    puts("queue");
                else if(pqq)
                    puts("priority queue");
                else
                    puts("stack");
            }
        }
    }
}
