class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>s;
        int n=temperatures.size();
        vector<int>vec(n,0);
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
                vec[i]=0;
            }
            else{
                while(!s.empty()){
                    pair<int,int>p=s.top();
                    if(p.first>temperatures[i]){
                        vec[i]=p.second-i;
                        break;
                    }
                    else{
                        s.pop();
                    }
                }
            }
            s.push({temperatures[i],i});
        }
        return vec;
    }
};
