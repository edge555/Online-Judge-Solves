class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>stu,san;
        for(int i=0;i<students.size();i++){
            stu.push(students[i]);
            san.push(sandwiches[i]);
        }
        while(!san.empty()){
            int r=san.front();
            int cnt=stu.size();
            bool f=false;
            while(cnt--){
                if(stu.front()==r){
                    stu.pop();
                    san.pop();
                    f=true;
                    break;
                }
                else{
                    stu.push(stu.front());
                    stu.pop();
                }
            }
            if(!f){
                break;
            }
        }
        return san.size();
    }
};
