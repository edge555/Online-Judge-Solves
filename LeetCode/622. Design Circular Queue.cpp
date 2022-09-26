class MyCircularQueue
{
public:
    vector<int> circularQueue;
    int cur=0,len,front=0;

    MyCircularQueue(int k){
        circularQueue.resize(k,-1);
        len=k;
    }

    bool enQueue(int value){
        int curAt=cur%len;
        if(circularQueue[curAt]==-1)
        {
            circularQueue[curAt]=value;
            cur++;
            return true;
        }
        return false;
    }

    bool deQueue()
    {
        if(front==cur){
            return false;
        }
        int removeFrom= front%len;
        circularQueue[removeFrom]= -1;
        front++;
        return true;
    }

    int Front(){
        return circularQueue[front%len];
    }

    int Rear(){
        if(cur==0){
            return -1;
        }
        return circularQueue[(cur-1)%len];
    }

    bool isEmpty(){
        return front==cur;
    }

    bool isFull(){
        return cur-front==len;
    }
};
