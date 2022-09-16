class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0,j=0;
        stack<int>s;
        while(i<pushed.size() && j<popped.size()){
            if(s.empty()){
                s.push(pushed[i++]);
            }
            else{
                if(s.top()==popped[j]){
                    s.pop();
                    j++;
                }
                else{
                    s.push(pushed[i++]);
                }
            }
        }
        while(j<popped.size()){
            if(s.empty()){
                break;
            }
            if(s.top()==popped[j]){
                s.pop();
                j++;
            }
            else{
                break;
            }
        }
        return i==pushed.size() && j==popped.size();
    }
};
