class Solution {
public:
    string interpret(string command) {
        string s="";
        int i;
        for(i=0;i<command.size();)
        {
            if(command[i]=='G')
            {
                s+="G";
                i++;
            }
            else if(command[i]=='(' && command[i+1]==')')
            {
                s+="o";
                i+=2;
            }
            else
            {
                s+="al";
                i+=4;
            }
        }
        return s;
    }
};
