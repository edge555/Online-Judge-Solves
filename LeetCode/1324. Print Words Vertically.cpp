class Solution {
public:
    vector<string> printVertically(string s) {
        stringstream ss(s);
        string t;
        vector<string>vec,ans;
        while(ss>>t){
            vec.push_back(t);
        }
        int len=0;
        for(auto x:vec){
            len=max(len,(int)x.size());
        }
        for(int i=0;i<len;i++){
            string p="";
            for(int j=0;j<vec.size();j++){
                if(vec[j].size()>=i+1){
                    p+=vec[j][i];
                }
                else{
                    p+=" ";
                }
            }
            while(!p.empty()){
                if(p[p.size()-1]==' '){
                    p.pop_back();
                }
                else{
                    break;
                }
            }
            ans.push_back(p);
        }
        return ans;
    }
};
