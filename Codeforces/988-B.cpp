#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;
bool func(string a,string b)
{
    return a.size()<b.size();
}
bool chk(string a,string b)
{
    int i,j,k;
    string s;
    bool ok=false;
    for(i=0;i<=b.size()-a.size();i++)
    {
        s=b.substr(i,a.size());
        if(s==a)
        {
            return true;
            break;
        }
    }
    return false;
}
int main()
{
    int n,i,cnt=0;
    string a;
    cin>>n;
    vector<string>vec;
    vector<string>::iterator it;
    while(n--)
    {
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end(),func);
    for(i=0;i<vec.size()-1;i++)
    {
        if((chk(vec[i],vec[i+1]))==true)
            cnt++;
    }
    if(cnt==vec.size()-1)
    {
        cout<<"YES"<<endl;
        for(it=vec.begin();it!=vec.end();it++)
            cout<<*it<<endl;
    }
    else
        cout<<"NO"<<endl;
}
