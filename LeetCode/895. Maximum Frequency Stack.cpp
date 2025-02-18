class FreqStack {
public:
    int mx;
    unordered_map<int,int>freq;
    unordered_map<int,stack<int>>freqStack;
    FreqStack() {
        mx=0;
    }

    void push(int val) {
        freq[val]++;
        if(mx<freq[val]){
            mx=freq[val];
        }
        freqStack[freq[val]].emplace(val);
    }

    int pop() {
        int val=freqStack[mx].top();
        freqStack[mx].pop();
        freq[val]--;
        if (freqStack[mx].empty()){
            mx--;
        }
        return val;
    }
};
