class Solution {
public:
    void printSubset(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
        if(i == nums.size()){
            // store elements
            allSubsets.push_back({ans});
            return;
        }
        // for inclusion
        ans.push_back(nums[i]);
        printSubset(nums, ans, i+1, allSubsets);

        ans.pop_back(); // backtracking
        printSubset(nums, ans, i+1, allSubsets); // for exclusion

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets; 
        vector <int> ans;
        printSubset(nums, ans, 0, allSubsets);  
        return allSubsets;        
    }
};