#include <bits/stdc++.h>
#include <utility>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define pb push_back
using namespace std;
typedef pair<int,int> pr;
map<pr,pr>mp;
int main()
{
    int n,q,id,atr,val,pror;
    cin>>n>>q;
    while(n--)
    {
        cin>>id>>atr>>val>>pror;

        if(mp[pr(id,atr)].second<=pror)
            mp[pr(id,atr)]=pr(val,pror);
    }
    while(q--)
    {
        cin>>id>>atr;
        cout<<mp[pr(id,atr)].first<<endl;
    }
}
