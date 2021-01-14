class Solution {
public:
    string defangIPaddr(string address) {
        string a="";
        int i;
        for(i=0;i<address.size();i++)
        {
            if(address[i]=='.')
            {
                a+="[.]";
            }
            else
            {
                a+=address[i];
            }
        }
        return a;
    }
};
