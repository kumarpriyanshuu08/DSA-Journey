class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n - 1;
        int first = -1;
        int last = -1;
        // first occurance
        while(st<=end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                first = mid;
                end = mid - 1;
            } else 
            if(target > nums[mid]){
                st = mid + 1;
            } else
                end = mid - 1;
        }

        // last occurance
         st = 0;
         end = n - 1;
         last = -1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(target == nums[mid]){
                last = mid;
                st = mid + 1;
            } else 
            if(target > nums[mid]){
                st = mid + 1;
            } else
                end = mid - 1;
        }
     return {first , last};
    }
};