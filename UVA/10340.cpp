#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;

int main()
{
    string s1,s2;
    int n,cnt;

    while(cin>>s1>>s2)
    {
        n=s1.size();
        cnt=0;

        for(int i=0;i<s2.size() && cnt<n;i++)
            if(s2[i]==s1[cnt])
                cnt++;

        if(cnt==n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}
