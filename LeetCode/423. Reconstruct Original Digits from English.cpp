class Solution {
public:
    string originalDigits(string s) {
        vector<string>vec={"zero","wto","xis","geiht","htree","seven","ufor","five","one","nine"};
        vector<char>cvec={'0','2','6','8','3','7','4','5','1','9'};
        unordered_map<char,int>mp,ans;
        for(auto c:s){
            mp[c]++;
        }
        for(int i=0;i<vec.size();i++){
            string s=vec[i];
            unordered_map<char,int>freq;
            for(auto c:s){
                freq[c]++;
            }
            bool f=true;
            while(true){
                for(auto it:freq){
                    if(mp[it.first]<it.second){
                        f=false;
                        break;
                    }
                }
                if(f){
                    ans[cvec[i]]++;
                    for(auto it:freq){
                        mp[it.first]-=it.second;
                    }
                }
                else{
                    break;
                }
            }
        }
        string p="";
        for(char c='0';c<='9';c++){
            int r=ans[c];
            while(r--){
                p+=c;
            }
        }
        return p;
    }
};
