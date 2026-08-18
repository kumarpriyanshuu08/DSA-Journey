class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t_sum = 0;
        int l_sum = 0;
        for(int i =0 ; i<nums.size(); i++){
            t_sum+=nums[i];
        }
        for(int i = 0; i<nums.size(); i++){
            int r_sum = t_sum - l_sum - nums[i];
            if(l_sum == r_sum){
                return i;
            }
            else{
                l_sum+= nums[i];
            }
        }
        return -1;
        
    }
};