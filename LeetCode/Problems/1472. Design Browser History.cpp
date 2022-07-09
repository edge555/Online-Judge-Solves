class BrowserHistory {
public:
    vector<string>vec;
    string cur;
    int ind=-1;
    BrowserHistory(string homepage) {
        vec.push_back(homepage);
        cur=homepage;
        ind=0;
    }

    void visit(string url) {
        while(vec[vec.size()-1]!=cur){
            vec.pop_back();
        }
        vec.push_back(url);
        cur=url;
        ind=vec.size()-1;
    }

    string back(int steps) {
        ind=max(0,ind-steps);
        cur=vec[ind];
        return cur;
    }

    string forward(int steps) {
        ind=min(ind+steps,(int)vec.size()-1);
        cur=vec[ind];
        return cur;
    }
};
