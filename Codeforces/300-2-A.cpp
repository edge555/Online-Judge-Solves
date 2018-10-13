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
    sf(n);
    int x=0,y=0,z=0;
    rep0(i,n)
    {
        sf(k);
        vec.pb(k);
        if(k==0)
            z++;
        else if(k<0)
            x++;
        else
            y++;
    }
    queue<int>q,qq,qqq;
    bool one=false,two=false;
    if(x>=1 && y>=1)
    {
        rep0(i,n)
        {
            if(one && two)
                qqq.push(vec[i]);
            else
            {
                if(vec[i]<0)
                {
                    if(!one)
                    {
                        q.push(vec[i]);
                        one=true;
                    }
                    else
                        qqq.push(vec[i]);
                }
                else if(vec[i]>0)
                {
                    if(!two)
                    {
                        qq.push(vec[i]);
                        two=true;
                    }
                    else
                        qqq.push(vec[i]);
                }
                else
                    qqq.push(vec[i]);
            }
        }
    }
    else if(x>=1 && y==0)
    {
        int cnt=2;
        rep0(i,n)
        {
            if(vec[i]==0)
                qqq.push(vec[i]);
            else
            {
                if(cnt!=0)
                {
                    qq.push(vec[i]);
                    cnt--;
                }
                else
                {
                    if(!one)
                    {
                        q.push(vec[i]);
                        one=true;
                    }
                    else
                        qqq.push(vec[i]);

                }
            }
        }
    }
    cout<<q.size();
    while(!q.empty())
    {
        cout<<" "<<q.front();
        q.pop();
    }
    cout<<endl;

    cout<<qq.size();
    while(!qq.empty())
    {
        cout<<" "<<qq.front();
        qq.pop();
    }
    cout<<endl;

    cout<<qqq.size();
    while(!qqq.empty())
    {
        cout<<" "<<qqq.front();
        qqq.pop();
    }


}
