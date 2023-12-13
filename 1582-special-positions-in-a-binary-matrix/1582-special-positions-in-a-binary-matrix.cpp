class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;
        int m = mat.size();
        int n = mat[0].size();
        vector<int> countRow(m, 0);
        vector<int> countCol(n, 0);
        
        for(int row = 0;row < m; row++) {
            for(int col = 0;col < n; col++) {
                if(mat[row][col] == 1) {
                    countRow[row]++;
                    countCol[col]++;
                }
            }
        }
        
        for(int row = 0;row < m; row++) {
            for(int col = 0;col < n; col++) {
                if(mat[row][col] == 1) {
                    if(countRow[row] == 1 && countCol[col] == 1) {
                        ans++;
                    }
                }
            }
        }
        
        return ans;
    }
};