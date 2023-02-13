class FirstUnique {
public:
    unordered_map<int,int>mp;
    queue<int>q;
    FirstUnique(vector<int>& nums) {
        for(auto x:nums){
            q.push(x);
            mp[x]++;
        }
    }

    int showFirstUnique() {
        while(!q.empty()){
            if(mp[q.front()]>1){
                q.pop();
            }
            else{
                break;
            }
        }
        if(q.empty()){
            return -1;
        }
        return q.front();
    }

    void add(int value) {
        q.push(value);
        mp[value]++;
    }
};
