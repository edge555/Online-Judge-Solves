struct TrieNode
{
    TrieNode *child[26]={};
    int curInd=-1;
    vector<int>words;
};
class Solution
{
    bool isPali(string &s,int i,int j){
        while(i<j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }
        return true;
    }
    TrieNode *root;
    void insert(string &s,int index){
        TrieNode *cur=root;
        for (int i=s.size()-1;i>=0;i--){
            int c=s[i]-'a';
            if(cur->child[c]==NULL){
                cur->child[c]=new TrieNode();
            }
            if(isPali(s,0,i)){
                cur->words.push_back(index);
            }
            cur=cur->child[c];
        }
        cur->words.push_back(index);
        cur->curInd=index;
    }

public:
    vector<vector<int>>palindromePairs(vector<string> &words){
        root=new TrieNode();
        for(int i=0;i<words.size();i++){
            insert(words[i],i);
        }
        vector<vector<int>>ans;
        for(int i=0;i<words.size();i++){
            TrieNode *cur=root;
            string &s=words[i];
            for(int j=0;j<s.size();j++){
                if(cur->curInd!=-1 && cur->curInd!=i && isPali(s,j,s.size()-1)){
                    ans.push_back({i,cur->curInd});
                }
                cur=cur->child[s[j]-'a'];
                if(cur==NULL){
                    break;
                }
            }
            if(cur==NULL){
                continue;
            }
            for(int j:cur->words){
                if(i==j){
                    continue;
                }
                ans.push_back({i,j});
            }
        }
        return ans;
    }
};
