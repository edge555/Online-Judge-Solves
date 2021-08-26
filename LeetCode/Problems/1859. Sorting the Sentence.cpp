class Solution {
public:
    string sortSentence(string s) {
        vector<pair<int,string> >vec;
       stringstream ss(s);
       string a;
       while(ss>>a)
       {
           string b=a.substr(0,a.size()-1);
           int r=a[a.size()-1]-'0';
           vec.push_back({r,b});
       }
       sort(vec.begin(),vec.end());
       string ans="";
       for(int i=0;i<vec.size();i++)
       {
           ans+=vec[i].second;
           if(i<vec.size()-1)
                ans+=" ";
       }
       return ans;
    }
};
