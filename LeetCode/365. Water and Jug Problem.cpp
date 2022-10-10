class Solution {
public:
    map<pair<int,int>,int>mp;
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if(jug1Capacity+jug2Capacity<targetCapacity) {return false;
        }
        if(jug1Capacity%2==0 && jug2Capacity%2==0 && targetCapacity%2!=0){
            return false;
        }
        queue<pair<int,int>>q;
        q.push({0,0});
        mp[{0,0}]++;
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            if(p.first==targetCapacity || p.second==targetCapacity || p.first+p.second==targetCapacity){
                return true;
            }
            if(p.first<0 || p.second<0 || p.first>1e6 || p.second>1e6){
                continue;
            }
            if(p.first==0){
                pair<int,int>pp={jug1Capacity,p.second};
                if(!mp.count(pp)){
                    mp[pp]++;
                    q.push(pp);
                }
            }
            if(p.second==0){
                pair<int,int>pp={p.first,jug2Capacity};
                if(!mp.count(pp)){
                    mp[pp]++;
                    q.push(pp);
                }
            }
            pair<int,int>pp={jug1Capacity,p.second};
            if(!mp.count(pp)){
                mp[pp]++;
                q.push(pp);
            }
            int rem1=jug1Capacity-p.first;
            if(rem1>0){
                if(p.second>=rem1){
                    pair<int,int>pp={jug1Capacity,p.second-rem1};
                    if(!mp.count(pp)){
                        mp[pp]++;
                        q.push(pp);
                    }
                }
                else{
                    pair<int,int>pp={p.first+p.second,0};
                    if(!mp.count(pp)){
                        mp[pp]++;
                        q.push(pp);
                    }
                }
            }
            pp={p.first,jug2Capacity};
            if(!mp.count(pp)){
                mp[pp]++;
                q.push(pp);
            }
            int rem2=jug2Capacity-p.second;
            if(rem2>0){
                if(p.first>=rem2){
                    pair<int,int>pp={p.first-rem2,jug2Capacity};
                    if(!mp.count(pp)){
                        mp[pp]++;
                        q.push(pp);
                    }
                }
                else{
                    pair<int,int>pp={0,p.first+p.second};
                    if(!mp.count(pp)){
                        mp[pp]++;
                        q.push(pp);
                    }
                }
            }
            pp={0,p.second};
            if(!mp.count(pp)){
                mp[pp]++;
                q.push(pp);
            }
            pp={p.first,0};
            if(!mp.count(pp)){

                mp[pp]++;
                q.push(pp);
            }
        }
        return false;
    }
};
