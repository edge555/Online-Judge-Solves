public class Solution {
    public int getInt(string s){
        int sum=0;
        foreach(char c in s){
            if(c=='-'){
                continue;
            }
            sum*=10;
            sum+=c-'0';
        }
        if(s[0]=='-'){
            return sum*-1;
        }
        return sum;
    }
    public int CalPoints(string[] ops) {
        Stack<int> st = new Stack<int>();
        foreach(string s in ops){
            if(s.Equals("+")){
                int a=st.Pop();
                int b=st.Peek();
                st.Push(a);
                st.Push(a+b);
            }
            else if(s.Equals("D")){
                int r = st.Peek();
                st.Push(r*2);
            }
            else if(s.Equals("C")){
                st.Pop();
            }
            else{
                st.Push(getInt(s));
            }
        }
        int sum=0;
        foreach(int x in st){
            sum+=x;
        }
        return sum;
    }
}