class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>vec;
        sort(changed.begin(),changed.end());
        unordered_map<int,int>mp;
        for(auto x:changed){
            mp[x]++;
        }
        queue<int>q;
        bool f=true;
        for(auto x:changed){
            mp[x]--;
            if(q.empty()){
                int r=2*x;
                if(mp[r]>0){
                    vec.push_back(x);
                    q.push(r);
                }
                else{
                    f=false;
                    break;
                }
            }
            else{
                if(x==q.front()){
                    q.pop();
                }
                else{
                    int r=2*x;
                    if(mp[r]>0){
                        vec.push_back(x);
                        q.push(r);
                    }
                    else{
                        f=false;
                        break;
                    }
                }
            }
        }
        if(!f || changed.size()&1){
            vec.clear();
        }
        return vec;
    }
};
