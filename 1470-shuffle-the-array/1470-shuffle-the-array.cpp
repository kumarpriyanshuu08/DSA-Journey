class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int sz = nums.size();
        vector<int> ans(sz);
        for(int i = 0; i < n; i++) {
            ans[2*i] = nums[i];
            ans[2*i+1] = nums[i+n];
        }
        return ans;
    }
};