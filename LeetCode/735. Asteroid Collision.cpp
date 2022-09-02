class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        for(auto x:asteroids){
            if(s.empty()){
                s.push(x);
            }
            else{
                if(x>=0){
                    s.push(x);
                }
                else{
                    bool f=true;
                    while(!s.empty()){
                        if(s.top()<0){
                            break;
                        }
                        if(s.top()==abs(x)){
                            s.pop();
                            f=false;
                            break;
                        }
                        else if(s.top()>abs(x)){
                            f=false;
                            break;
                        }
                        else{
                            s.pop();
                        }
                    }
                    if(f){
                        s.push(x);
                    }
                }
            }
        }
        vector<int>vec;
        while(!s.empty()){
            vec.push_back(s.top());
            s.pop();
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};
