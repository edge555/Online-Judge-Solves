class Bank {
public:
    long long mp[100005];
    int n;
    Bank(vector<long long>& balance) {
        n=balance.size();
        for(int i=0;i<n;i++){
            mp[i+1]=balance[i];
        }
    }

    bool transfer(int account1, int account2, long long money) {
        if(account1>=1 && account1<=n && account2>=1 && account2<=n && mp[account1]>=money){
            mp[account1]-=money;
            mp[account2]+=money;
            return true;
        }
        else{
            return false;
        }
    }

    bool deposit(int account, long long money) {
        if(account>=1 && account<=n){
            mp[account]+=money;
            return true;
        }
        else{
            return false;
        }
    }

    bool withdraw(int account, long long money) {
        if(account>=1 && account<=n && mp[account]>=money){
            mp[account]-=money;
            return true;
        }
        else{
            return false;
        }
    }
};
