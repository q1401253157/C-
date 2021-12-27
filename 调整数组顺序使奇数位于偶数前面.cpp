class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        if(nums.size()<=1) return nums;
        int n = nums.size();
        int left = 0;
        int right = n-1;
        while(left<right){
            if(nums[left]%2!=0){
                left++;
                continue;
            }
            if(nums[right]%2==0){
                right--;
                continue;
            }
            swap(nums[left],nums[right]);
        }
        return nums;
    }
};