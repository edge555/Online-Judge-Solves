class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size()==0){
            return 0;
        }
        sort(tokens.begin(),tokens.end());
        int score=0;
        if(power<tokens[0]){
            return 0;
        }
        score=1;
        power-=tokens[0];
        int l=1,r=tokens.size()-1;
        while(l<=r){
            if(power>=tokens[l]){
                score++;
                power-=tokens[l];
                l++;
            }
            else{
                if(score>0){
                    if(tokens[r]>=tokens[l] && l!=r){
                        score--;
                        power+=tokens[r];
                        r--;
                    }
                    else{
                        break;
                    }
                }
                else{
                    break;
                }
            }
        }
        return score;
    }
};
