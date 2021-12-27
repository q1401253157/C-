class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        vector<int> conclution ={};
        for(int i =0;i<k;i++){
            conclution.push_back(arr[i]);
        }
        return conclution;

    }
};