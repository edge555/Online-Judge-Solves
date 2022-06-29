class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize){
            return false;
        }
        map<int,int>mp;
        map<int,int>::iterator it;
        for(auto x:hand){
            mp[x]++;
        }
        int r=hand.size()/groupSize;
        while(r--){
            int last=-2;
            vector<int>vec;
            for(int i=0;i<groupSize;i++){
                if(last==-2){
                    it=mp.begin();
                    last=it->first;
                    if(it->second==1){
                        vec.push_back(it->first);
                    }
                    mp[it->first]--;
                    it++;
                }
                else{
                    if(it->first-1!=last || it==mp.end()){
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
