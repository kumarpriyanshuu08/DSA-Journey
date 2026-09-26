class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int stRow = 0, stCol = 0, endRow = m-1, endCol = n-1;
        vector<int> ans;
        while(stRow <= endRow && stCol <= endCol){
            //top
            for(int j = stCol; j<=endCol; j++){
                ans.push_back(mat[stCol][j]);
            }
            //right
            for(int i = stRow+1; i<=endRow; i++ ){
                ans.push_back(mat[i][endCol]);
            }
            //bottom
            for(int j = endCol-1; j>=stCol; j--){
                if(stRow == endRow){
                    break;
                }
                ans.push_back(mat[endRow][j]);
            }
            //left
            for(int i = endRow-1; i>=stRow+1; i--){
                if(stCol == endCol){
                    break;
                }
                ans.push_back(mat[i][stCol]);
            }
            stRow++;
            endRow--;
            stCol++;
            endCol--;
        }
        return ans;
    }
};