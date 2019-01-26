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
map<string,int>mp;
map<int,string>mp2;
map<string,int>::iterator it;
map<int,string>::iterator it2;
int getnum(string a)
{
    int x=0;
    for (int i=0;i<a.size()-2;i+=3)
    {
        string c;
        for (int k=i;k<i+3;k++)
            c.pb(a[k]);
        it=mp.find(c);
        x=(x*10)+it->second;

    }
    return x;
}
int main()
{
    mp["063"]=0;
    mp["010"]=1;
    mp["093"]=2;
    mp["079"]=3;
    mp["106"]=4;
    mp["103"]=5;
    mp["119"]=6;
    mp["011"]=7;
    mp["127"]=8;
    mp["107"]=9;

    mp2[0]="063";
    mp2[1]="010";
    mp2[2]="093";
    mp2[3]="079";
    mp2[4]="106";
    mp2[5]="103";
    mp2[6]="119";
    mp2[7]="011";
    mp2[8]="127";
    mp2[9]="107";

    while(1)
    {
        string a,b,s;
        getline(cin,s);
        if(s=="BYE")
            break;
        int i,j;
        bool chk=false;
        for (i=0;i<s.size();i++)
        {
            if(s[i]=='+'){
                chk=true;
                i++;
            }
            if(chk==false)
                a.pb(s[i]);
            else if (chk==true && s[i]!='=')
                b.pb(s[i]);

        }
        int p,q,r;

        p=getnum(a);
        q=getnum(b);
        r=p+q;

        stack<string>st;
        while(r!=0)
        {
            string c;
            int rem=r%10;
            it2=mp2.find(rem);
            c=it2->second;
            st.push(c);
            r/=10;
        }
        cout<<s;
        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
}
