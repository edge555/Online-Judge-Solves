class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k){
            return false;
        }
        map<int,int>mp;
        map<int,int>::iterator it;
        for(auto x:nums){
            mp[x]++;
        }
        int r=nums.size()/k;
        while(r--){
            int last=-1;
            vector<int>vec;
            for(int i=0;i<k;i++){
                if(last==-1){
                    it=mp.begin();
                    last=it->first;
                    if(it->second==1){
                        vec.push_back(it->first);
                    }
                    mp[it->first]--;
                    it++;
                }
                else{
                    if(it->first-1!=last){
                        return false;
                    }
                    else{
                        last=it->first;
                        if(it->second==1){
                            vec.push_back(it->first);
                        }
                        mp[it->first]--;
                        it++;
                    }
                }
            }
            for(auto x:vec){
                it=mp.find(x);
                mp.erase(it);
            }
        }
        return true;
    }
};
