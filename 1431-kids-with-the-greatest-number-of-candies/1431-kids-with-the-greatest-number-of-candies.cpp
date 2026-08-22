class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector <bool> result;
        int greatest = candies[0];
        for(int i=0; i<n; i++){
            if(candies[i]>greatest){
                greatest = candies[i];
            }
        }
        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies >= greatest){
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        return result;
    }
};