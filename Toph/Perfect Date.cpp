#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c,aa,bb,cc;
        set<int>st;
        scanf("%d/%d/%d",&a,&b,&c);
        st.insert(a);
        st.insert(b);
        scanf("%d/%d/%d",&aa,&bb,&cc);
        st.insert(aa);
        st.insert(bb);
        if(c!=cc)
            puts("Different");
        else if(st.size()==1)
            puts("Same");
        else if(st.size()>2)
            puts("Different");
        else
        {
            if((a>12 && b<=12)||(a<=12 && b>12))
                puts("Same");
            else
            {
                set<int>s1,s2;
                s1.insert(a);
                s1.insert(b);
                s2.insert(aa);
                s2.insert(bb);
                if (s1.size()!=s2.size())
                    puts("Different");
                else
                    puts("Not Sure");

            }
        }
    }
}
