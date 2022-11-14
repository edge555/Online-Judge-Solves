class MapSum {
struct node
{
    bool endmark;
    int cnt=0;
    node* next[27];
    node()
    {
        endmark = false;
        for (int i = 0; i < 26; i++){
            next[i] = NULL;
        }
    }
}*root;
public:
    unordered_map<string,int>mp;
    MapSum() {
        root = new node();
    }
    void insert(string key, int val) {
        if(mp.count(key)){
            deletepref(key);
        }
        int len=key.size();
        node* curr = root;
        for (int i = 0; i < len; i++)
        {
            int id = key[i] - 'a';
            if (curr->next[id] == NULL)
                curr->next[id] = new node();
            curr = curr->next[id];
            curr->cnt+=val;
        }
        mp[key]=val;
    }

    int sum(string prefix) {
        int len=prefix.size();
        node* curr = root;
        for (int i = 0; i < len; i++)
        {
            int id = prefix[i] - 'a';
            if (curr->next[id] == NULL){
                return 0;
            }
            curr = curr->next[id];
        }
        return curr->cnt;
    }
    void deletepref(string prefix) {
        int r=mp[prefix];
        int len=prefix.size();
        node* curr = root;
        for (int i = 0; i < len; i++)
        {
            int id = prefix[i] - 'a';
            if (curr->next[id] == NULL)
                curr->next[id] = new node();
            curr = curr->next[id];
            curr->cnt-=r;
        }
    }
};
