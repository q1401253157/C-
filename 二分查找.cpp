class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();
        int sum = 0;
        int mid = 0;
        while(l<r){
            mid = (l+r)/2;
            if(nums[mid]<target)
                l = mid+1;
            else if(nums[mid]>=target)
                r = mid;
        }
        while(l<nums.size()&&nums[l++]==target)
            sum++;
        return sum;
    }

};