
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
typedef long long ll;
using namespace std;

int main()
{
    int k,n,a,cnt=0,l;
    deque<int>dq;
    bool chk=true;
    cin>>k>>n;
    l=k;
    while(k--)
    {
        cin>>a;
        dq.push_back(a);
        if(a>n)
            chk=false;
    }
    if(chk){
        cout<<l<<endl;
        return 0;
    }
    else
    {
        while(1)
        {
            if(dq.front()>n && dq.back()>n)
                break;
            if(dq.front()<=n && dq.back()<=n)
            {
                cnt++;
                dq.pop_back();
            }
            else
            {
                if(dq.front()<=n)
                {   
                    cnt++;
                    dq.pop_front();
                }   
                else
                {
                    cnt++;
                    dq.pop_back();
                }      
            }
        }
        cout<<cnt<<endl;
    }
}
