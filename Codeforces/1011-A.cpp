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
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int l,k,i;
    sff(l,k);
    getchar();
    string a,res="";
    cin>>a;
    set<char>st;
    set<char>::iterator it;
    for (i=0;i<a.size();i++)
        st.insert(a[i]);
    char ch;
    bool chk=false;
    for (it=st.begin();it!=st.end();it++)
    {
        if(!chk)
        {
            k--;
            res+=*it;
            ch=*it;
            chk=true;
        }
        else
        {
            char cch=*it;
            if(cch-97!=ch-96)
            {
                k--;
                ch=*it;
                res+=*it;
            }
        }
        if(k==0)
            break;
    }
    if(k!=0)
        puts("-1");
    else
    {
        int sum=0;
        for (i=0;i<res.size();i++)
            sum+=res[i]-96;
        pf("%d\n",sum);
    }
}
