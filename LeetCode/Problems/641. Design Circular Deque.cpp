class MyCircularDeque {
public:
    int len,maxlen;
    deque<int>dq;
    MyCircularDeque(int k) {
        maxlen=k;
        len=0;
    }

    bool insertFront(int value) {
        if(len<maxlen){
            len++;
            dq.push_front(value);
            return true;
        }
        return false;

    }

    bool insertLast(int value) {
        if(len<maxlen){
            len++;
            dq.push_back(value);
            return true;
        }
        return false;
    }

    bool deleteFront() {
        if(len==0){
            return false;
        }
        len--;
        dq.pop_front();
        return true;
    }

    bool deleteLast() {
        if(len==0){
            return false;
        }
        len--;
        dq.pop_back();
        return true;
    }

    int getFront() {
        if(len==0){
            return -1;
        }
        return dq.front();
    }

    int getRear() {
        if(len==0){
            return -1;
        }
        return dq.back();
    }

    bool isEmpty() {
        return len==0;
    }

    bool isFull() {
        return len==maxlen;
    }
};
