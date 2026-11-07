class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int notMatched = 0;
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());
        int i = 0, n = heights.size();
        while(i < n){
            if(heights[i] == expected[i]){
                i++;
            } else{
                 notMatched+=1;
                 i++;
            }
        }
       return notMatched; 
    }
};