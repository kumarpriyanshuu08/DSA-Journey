class Solution {
public:
void printSubsets(vector<int>& nums, vector<int>&ans, int i,  vector<vector<int>> &allSubsets ){
    int n = nums.size();
    if(i == n){
        allSubsets.push_back(ans);
        return;
    }
    //include
    ans.push_back(nums[i]);
    printSubsets(nums, ans, i+1, allSubsets);

    ans.pop_back(); // backtracking

    int idx = i+1;
    while(idx < n && nums[idx] == nums[idx-1]){ //  checking for duplicates subsets.
        idx++;
    }
    printSubsets(nums, ans, idx, allSubsets);


}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> allSubsets;
        vector<int> ans;

        printSubsets(nums, ans, 0, allSubsets);
        return allSubsets;
    }
};