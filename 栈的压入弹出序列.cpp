//输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否为该栈的弹出顺序。假设压入栈的所有数字均不相等
pushed = [1,2,3,4,5], popped = [4,5,3,2,1]
pushed = [1,2,3,4,5], popped = [4,3,5,1,2]

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s ;
        int i = 0,j=0;
        while(j<popped.size()){
            s.push(pushed[j]);
            while(!s.empty()&&s.top()==popped[i]){
                s.pop();
                i++;
            }
            j++;
        }
        if(s.empty()) return true;
        else return false;

    }
};