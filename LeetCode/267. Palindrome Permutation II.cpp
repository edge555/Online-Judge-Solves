class Solution {
public:
    vector<string> generatePalindromes(string s) {
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        char ch='-';
        int cnt=0;
        for(auto it:mp){
            if(it.second&1){
                ch=it.first;
                cnt++;
            }
        }
        if(cnt>1){
            return {};
        }
        if(cnt){
            mp[ch]--;
        }
        string a="";
        for(auto it:mp){
            int r=it.second/2;
            while(r--){
                a+=it.first;
            }
        }
        sort(a.begin(),a.end());
        unordered_set<string>st;
        do{
            st.insert(a);
        }while(next_permutation(a.begin(),a.end()));
        vector<string>vec;
        for(auto x:st){
            string b=x;
            reverse(b.begin(),b.end());
            if(cnt){
                vec.push_back(x+ch+b);
            }
            else{
                vec.push_back(x+b);
            }
        }
        return vec;
    }
};
