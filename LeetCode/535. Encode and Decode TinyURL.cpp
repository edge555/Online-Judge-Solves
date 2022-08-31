class Solution {
public:
    unordered_map<string,string>mp;
    unordered_map<string,int>rmp;
    string gethash(string &ar)
    {
        long long p=10003193,mod=1e9+7;
        long long now=1,hsh=0;
        for(int i=0;i<ar.size();i++)
        {
            hsh=((now%mod)*(hsh%mod))%mod+ar[i]-'a';
            now=((now%mod)*(p%mod))%mod;
        }
        return to_string(hsh);
    }
    string encode(string longUrl) {
        string s=gethash(longUrl);
        mp[s]=longUrl;
        return s;
    }
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};
