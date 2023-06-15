class Solution {
public:
    string nextClosestTime(string time) {
        stringstream ss(time);
        int a,b,ans=1e9;
        char c;
        ss>>a>>c>>b;
        unordered_map<int,int>mp;
        mp[a/10]++;
        mp[a%10]++;
        mp[b/10]++;
        mp[b%10]++;
        int x=a,y=b;
        y++;
        if(y==60){
            y=0;
            x++;
        }
        if(x==24){
            x=0;
        }
        string s="";
        while(true){
            if(x==a && y==b){
                break;
            }
            if(mp.count(x/10) && mp.count(x%10) && mp.count(y/10) && mp.count(y%10)){
                if(s!=""){
                    break;
                }
                if(x<10){
                    s=s+"0"+to_string(x)+":";
                }
                else{
                    s=s+to_string(x)+":";
                }
                if(y<10){
                    s=s+"0"+to_string(y);
                }
                else{
                    s=s+to_string(y);
                }
            }
            y++;
            if(y==60){
                y=0;
                x++;
            }
            if(x==24){
                x=0;
            }
        }
        if(s==""){
            s=time;
        }
        return s;
    }
};
