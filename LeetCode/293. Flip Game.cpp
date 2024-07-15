class Solution {
public:
    vector<string> generatePossibleNextMoves(string currentState) {
        vector<string>ans;
        string temp=currentState;

        for(int i=0;i<currentState.size()-1;i++){
            if(currentState[i]=='+' && currentState[i+1]=='+'){
                temp[i]='-';
                temp[i+1]='-';
                ans.push_back(temp);
            }
            temp=currentState;
        }
        return ans;
    }
};
