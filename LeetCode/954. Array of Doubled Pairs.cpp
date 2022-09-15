class Solution {
public:
    bool check(vector<int>&vec){
        if(vec.empty()){
            return true;
        }
        if(vec[0]<0){
            for(int i=0;i<vec.size();i++){
                vec[i]=abs(vec[i]);
            }
        }
        sort(vec.begin(),vec.end());
        unordered_map<int,int>mp;
        for(auto x:vec){
            mp[x]++;
        }
        queue<int>q;
        int cnt=0;
        for(auto x:vec){
            mp[x]--;
            if(q.empty()){
                int r=x*2;
                if(mp[r]>0){
                    q.push(r);
                    cnt++;
                }
                else{
                    return false;
                }
            }
            else{
                if(x==q.front()){
                    q.pop();
                }
                else{
                    int r=x*2;
                    if(mp[r]>0){
                        q.push(r);
                        cnt++;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return q.empty();
    }
    bool canReorderDoubled(vector<int>& arr) {
        vector<int>pos,neg;
        for(auto x:arr){
            if(x<0){
                neg.push_back(x);
            }
            else{
                pos.push_back(x);
            }
        }
        if(pos.size()&1 || neg.size()&1){
            return false;
        }
        return check(pos) && check(neg);
    }
};
