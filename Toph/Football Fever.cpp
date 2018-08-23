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
typedef long long int ll;
using namespace std;
bool func(pair<char,int>a,pair<char,int>b)
{
    return a.second>b.second;
}
int main()
{
    int n,k;
    sf(n);
    char ch;
    vector<pair<char,int> >vec;
    int gmax=0,dmax=0,fmax=0,mfmax=0;
    for (int i=0;i<n;i++)
    {
        cin>>ch>>k;
        vec.push_back(make_pair(ch,k));
        if(ch=='G')
        {
            if(k>gmax)
                gmax=k;
        }
        else if(ch=='D')
        {
            if(k>dmax)
                dmax=k;
        }
        else if(ch=='M')
        {
            if(k>mfmax)
                mfmax=k;
        }
        else if(ch=='F')
        {
            if(k>fmax)
                fmax=k;
        }
    }
    bool d=false,f=false,mf=false;
    for (int i=0;i<vec.size();i++)
    {
        if(vec[i].first=='G')
        {
            vec[i].second=-1;
        }
        else if(vec[i].first=='D' && vec[i].second==dmax && !d)
        {
            vec[i].second=-1;
            d=true;
        }
        else if(vec[i].first=='F' && vec[i].second==fmax && !f)
        {
            vec[i].second=-1;
            f=true;
        }
        else if(vec[i].first=='M' && vec[i].second==mfmax && !mf)
        {
            vec[i].second=-1;
            mf=true;
        }
    }

    int sum=gmax+mfmax+fmax+dmax;
    dmax=0,mfmax=0;
    for (int i=0;i<vec.size();i++)
    {
        ch=vec[i].first;
        k=vec[i].second;
        if(ch=='D')
        {
            if(vec[i].second>dmax)
                dmax=vec[i].second;
        }
        else if(ch=='M')
        {
            if(vec[i].second>mfmax)
                mfmax=vec[i].second;
        }
    }
    sum+=(dmax+mfmax);
    d=false,mf=false;
    for (int i=0;i<vec.size();i++)
    {
        if(vec[i].first=='M' && vec[i].second==mfmax && !mf)
        {
            vec[i].second=-1;
            mf=true;
        }
        else if(vec[i].first=='D' && vec[i].second==dmax && !d)
        {
            vec[i].second=-1;
            d=true;
        }
        if(d && mf)
            break;
    }
    sort(vec.begin(),vec.end(),func);
    for (int i=0;i<5;i++)
    {
        if(vec[i].second!=-1)
            sum+=vec[i].second;
    }
    cout<<sum<<endl;
}
