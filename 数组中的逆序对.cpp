class Solution {
public:
    int sum= 0;
    void merge_sort(vector<int>& nums ,int l,int r){
        if(l>=r) return ;
        int mid = (l+r)/2;
        merge_sort(nums,l,mid);
        merge_sort(nums,mid+1,r);
        merge(nums,l,r,mid);
    }
    void merge(vector<int>& nums ,int l,int r,int mid){
       vector<int> tmp = {};
       int p1 = l;
       int p2 = mid +1 ;
       while(p1<=mid &&p2 <=r){
           if(nums[p1]<=nums[p2]){
               tmp.push_back(nums[p1++]);
           }
           else{
               sum = sum + mid-p1+1;
               tmp.push_back(nums[p2++]);
           }
       }
       while(p1<=mid){
            tmp.push_back(nums[p1++]);
       }
       while(p2<=r){
            tmp.push_back(nums[p2++]);
       }
        for(int i = 0;i<tmp.size();i++){
            nums[l+i] = tmp[i];
        }

    }

    int reversePairs(vector<int>& nums) {
      if(nums.size()<2) return 0;
      else {
          merge_sort(nums,0,nums.size()-1);
      }
      return sum;
    }
};