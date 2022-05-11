public class MyStack {
    Queue<int> q1;
    Queue<int> q2;
    public MyStack() {
        q1 = new Queue<int>();
        q2 = new Queue<int>();
    }
    
    public void Push(int x) {
        while(q1.Count>0){
            int r=q1.Dequeue();
            q2.Enqueue(r);
        }
        q1.Enqueue(x);
        while(q2.Count>0){
            int r=q2.Dequeue();
            q1.Enqueue(r);
        }
    }
    
    public int Pop() {
        return q1.Dequeue();
    }
    
    public int Top() {
        return q1.Peek();
    }
    
    public bool Empty() {
        return q1.Count==0;
    }
}
