//输入一个整型数组，数组中的一个或连续多个整数组成一个子数组。求所有子数组的和的最大值。
//输入: nums = [-2,1,-3,4,-1,2,1,-5,4]
//输出: 6
//解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = -999;
        //vector<int> root = {};
        //if (nums.size() <= 1) return nums;
        //root.push_back(nums[0]);
        maxsum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i] + nums[i - 1]) {
                nums[i] = nums[i] + nums[i - 1];
            }
            else {
            //	root.clear();
                nums[i] = nums[i];
            }
            if (maxsum < nums[i]) maxsum = nums[i];
        //root.push_back(i);
        }
        return maxsum;
    }
};