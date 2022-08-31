class MinStack {
public:
    stack<long long>s;
    long long minEle;
    MinStack() {

    }

    void push(long long val){
        if(s.empty())
        {
            minEle=val;
            s.push(val);
            return;
        }
        if(val<minEle)
        {
            s.push(2*val-minEle);
            minEle=val;
        }
        else
           s.push(val);
    }

    void pop(){

        long long t=s.top();
        s.pop();
        if(t<minEle)
            minEle=2*minEle-t;

    }

    long long top(){
        long long t=s.top();
        return (t<minEle)?minEle:t;
    }

    long long getMin(){
        return minEle;
    }
};
