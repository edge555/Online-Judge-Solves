class Solution {
public:
    struct info{
        string s;
        int cnt,ind;
        info(){

        }
        info(string _s,int _cnt,int _ind){
            s=_s;
            cnt=_cnt;
            ind=_ind;
        }
    };
    static bool comp(info &a,info &b){
        if(a.cnt==b.cnt){
            return a.ind<b.ind;
        }
        return a.cnt>b.cnt;
    }
    vector<string> sortFeatures(vector<string>& features, vector<string>& responses) {
        unordered_map<string,int>mp;
        for(auto s:responses){
            stringstream ss(s);
            string p;
            unordered_set<string>st;
            while(ss>>p){
                st.insert(p);
            }
            for(auto it:st){
                mp[it]++;
            }
        }
        vector<info>vec;
        for(int i=0;i<features.size();i++){
            vec.push_back({features[i],mp[features[i]],i});
        }
        sort(vec.begin(),vec.end(),comp);
        vector<string>ans;
        for(auto i:vec){
            ans.push_back(i.s);
        }
        return ans;
    }
};
