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
    int n,i,k;
    priority_queue<int>pq;
    multiset<int>st;
    multiset<int>::iterator it;
    sf(n);
    rep0(i,n)
    {
        sf(k);
        pq.push(k);
        st.insert(k);
    }
    while(1)
    {
        it=st.begin();
        if(*it==pq.top())
            break;
        int x,y;
        x=pq.top();
        st.erase(x);
        pq.pop();
        x-=*it;
        st.insert(x);
        pq.push(x);
    }
    k=pq.top();
    cout<<n*k;
}
