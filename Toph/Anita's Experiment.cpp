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
bool func(int a,int b)
{
    return a>b;
}
int main()
{
    int k;
    sf(k);
    while(k--)
    {
        int ara[10000],ara2[10000],i,j,n;
        bool same=true;
        sf(n);
        set<int>st;
        for (i=0;i<n;i++)
        {
            cin>>ara[i];
            ara2[i]=ara[i];
            st.insert(ara[i]);
        }
        if(st.size()==1)
            cout<<"neutral\n";
        else
        {
            bool chk=true;
            sort(ara2,ara2+n);
            for (i=0;i<n;i++)
            {
                if(ara2[i]!=ara[i])
                {
                    chk=false;
                    break;
                }
            }
            if(chk==true)
                cout<<"allGoodDays\n";
            else
            {
                chk=true;
                sort(ara2,ara2+n,func);
                for (i=0;i<n;i++)
                {
                    if(ara2[i]!=ara[i])
                        chk=false;
                }
                if(chk)
                    cout<<"allBadDays\n";
                if(chk==false)
                {
                    vector<int>vec;
                    vector<int>::iterator it;
                    int cnt=0,mx=0;
                    for (i=1;i<n-1;i++)
                    {
                       {
                          if(ara[i]>ara[i+1] && ara[i]>ara[i-1])
                            vec.push_back(i+1);
                       }
                    }
                    if(vec.size()<2)
                        cout<<"none\n";
                    else
                    {
                        for (it=vec.begin();it!=vec.end()-1;)
                        {
                           int x,y;
                           x=*it;
                           it++;
                           y=*it;
                           mx=max(mx,y-x-1);
                        }
                       cout<<mx<<endl;
                    }
                }
            }
        }
    }
}
