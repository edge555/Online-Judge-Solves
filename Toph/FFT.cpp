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
typedef long long int ll;
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int k,i;
        cin>>k;
        string a;
        vector<string>vec;
        while(k--)
        {
            cin>>a;
            vec.pb(a);
        }
        bool chk=false;
        int cnt=0;
        vector<string>res;
        vector<string>::iterator it;
        for (i=0;i<=vec.size()-3;i++)
        {
            string one,two,three,ans;
            one=vec[i];
            two=vec[i+1];
            three=vec[i+2];
            if (one[0]=='F' && two[0]=='F' && three[0]=='T')
            {
                chk=true;
                ans=one+" "+two+" "+three;
                res.pb(ans);
                cnt++;
            }
        }
        if(!chk)
            cout<<"0"<<endl;
        else
        {
            cout<<cnt<<endl;
            for (it=res.begin();it!=res.end();it++)
                cout<<*it<<endl;
        }
    }
}
