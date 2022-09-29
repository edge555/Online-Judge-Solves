class Solution {
public:
    string pushDominoes(string dominoes) {
        int n=dominoes.size();
        vector<int>left(n,-1), right(n);
        for(int i=0;i<n;i++){
            if(dominoes[i]!='.'){
                left[i]=i;
            }
            else{
                left[i]=(i-1>=0)?left[i-1]:-1;
            }

            if(dominoes[n-i-1] !='.'){
                right[n-i-1]=n-i-1;
            }
            else{
                right[n-i-1]=(n-i<n)?right[n-i]:n;
            }
        }
        for(int i=0;i<n;i++){
            if(dominoes[i]!='.'){
                continue;
            }
            int left_power=(left[i]==-1 || dominoes[left[i]]=='L')?INT_MAX:i-left[i];
            int right_power=(right[i]==n || dominoes[right[i]]=='R')?INT_MAX:right[i]-i;
            if(left_power!=right_power){
                dominoes[i]=(left_power<right_power)?'R':'L';
            }
        }
        return dominoes;
    }
};
