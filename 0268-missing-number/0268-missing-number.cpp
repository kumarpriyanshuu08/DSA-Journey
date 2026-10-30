class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int val : nums){
            sum +=val;
        }
        int totSum = n*(n+1)/2;
        return totSum - sum;
    }
};