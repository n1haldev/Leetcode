class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix.size() - 1;
        int n = matrix[0].size();
        
        int row = 0;
        
        while(l <= r) {
            int mid = (l+r)/2;
            
            if(target >= matrix[mid][0] && target <= matrix[mid][n-1]) {
                row = mid;
                break;
            }
            else if(target < matrix[mid][0]) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        
        l = 0;
        r = matrix[0].size() - 1;
        
        while(l <= r) {
            int mid = (l+r)/2;
            
            if(target == matrix[row][mid]) {
                return true;
            }
            else if(target < matrix[row][mid]) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        
        return false;
    }
};