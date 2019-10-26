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
bool comp(string a,string b)
{
    return a.size()<b.size();
}
int main()
{
    int n,i,k;
    sff(n,k);
    string a,pw;
    vector<string>vec;
    vector<string>::iterator it;
    rep0(i,n)
    {
        cin>>a;
        vec.pb(a);
    }
    cin>>pw;
    sort(all(vec),comp);
    int x=0,y=0,z=0;
    rep0(i,vec.size())
    {
        if(vec[i].size()==pw.size())
        {
            x++;
            break;
        }
        x++;
        z++;
        if(z==k)
        {
            z=0;
            x+=5;
        }
    }
    z=0;
    for(it=vec.begin();it!=vec.end();it++)
    {
        if(*it==pw){
            vec.erase(it);
            it--;
        }
    }
    for(it=vec.begin();it!=vec.end();it++)
    {
        string p=*it;
        if(p.size()>pw.size())
        {
            vec.insert(it,pw);
            break;
        }
    }
    if(vec.size()!=n)
        vec.pb(pw);
    rep0(i,vec.size())
    {
        if(vec[i]==pw)
        {
            y++;
            break;
        }
        y++;
        z++;
        if(z==k)
        {
            z=0;
            y+=5;
        }
    }
    cout<<x<<" "<<y;
}
