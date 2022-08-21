class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int b=0,w=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='B'){
                b++;
            }
            else{
                w++;
            }
        }
        int ans=k-b;
        int st=0,en=k-1;
        while(en<blocks.size()){
            if(blocks[st]=='B'){
                b--;
            }
            else{
                w--;
            }
            st++;
            en++;
            if(en==blocks.size()){
                break;
            }
            if(blocks[en]=='B'){
                b++;
            }
            else{
                w++;
            }
            ans=min(ans,k-b);
        }
        return ans;
    }
};
