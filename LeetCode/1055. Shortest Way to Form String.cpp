class Solution {
public:
    int shortestWay(string source, string target) {
        int i=0,cnt=0,j=0;
        while(i<target.size()){
            j=0;
            bool f=false;
            while(j<source.size()){
                if(source[j]==target[i]){
                    i++;
                    f=true;
                }
                j++;
            }
            if(!f){
                return -1;
            }
            cnt++;
        }
        return cnt;
    }
};
