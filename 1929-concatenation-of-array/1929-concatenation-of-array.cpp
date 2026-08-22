class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int sz =2* nums.size();
        vector<int> ans(sz);

        for(int i=0; i<nums.size(); i++){
            ans[i]=nums[i];
            ans[i+nums.size()] = nums[i];
        }
        return ans;   

        
    }
};