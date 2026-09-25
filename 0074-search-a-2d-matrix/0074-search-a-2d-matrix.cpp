class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        // binary search on total no of rows.
        // m -> total no of rows,  n -> total no of columns.
        int m = mat.size(), n = mat[0].size();
        int startRow = 0, endRow = m-1;
        while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow)/2;
            if(target >= mat[midRow][0] && target <= mat[midRow][n-1]){
                // binary search in that particular column where target can be found
                int st = 0, end = n-1;
                while(st <= end){
                    int mid = st + (end - st)/2;
                    if(target == mat[midRow][mid]){
                        return true;
                    }
                    else if(target < mat[midRow][mid]){
                        end = mid-1;
                    } else {
                        st = mid+1;
                    }
                }
                return false;
            } else if (target > mat[midRow][n-1]){
                startRow = midRow + 1;
            } else {
                endRow = midRow - 1;
            }
        }
        return false;
    }
};