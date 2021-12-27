class Solution {
public:
    vector<int> printNumbers(int n) {
           vector<int> q = {};
           int max = pow(10,n)-1;
           int i =1;
           while(i<=max){
               q.push_back(i);
               i++;
           }
           return q;
    }
};