class Logger {
public:
    unordered_map<string,int>mp;
    Logger() {

    }

    bool shouldPrintMessage(int timestamp, string message) {
        if(mp.count(message)){
            if(timestamp>=mp[message]){
                mp[message]=timestamp+10;
                return true;
            }
            else{
                return false;
            }
        }
        else{
            mp[message]=timestamp+10;
            return true;
        }
    }
};
