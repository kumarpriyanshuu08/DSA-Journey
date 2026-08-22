class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int sz =2*n;
        vector<int> ans(sz);

        for(int i=0; i<n; i++){
            ans[i]=nums[i];
            ans[i+n] = nums[i];
        }
        return ans;   

        
    }
};