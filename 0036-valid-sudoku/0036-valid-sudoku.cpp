class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int counter[9];
        for(int c = 0;c < 9; c++) counter[c] = 0;

        for(int i = 0;i < 9; i++) {
            
            // row check
            for(int row_ele = 0; row_ele < 9; row_ele++) {
                if(isdigit(board[i][row_ele])) {
                    int num = board[i][row_ele] - '1';
                    counter[num]++;
                    if(counter[num] == 2) {
                        cout << num << endl;
                        cout << "row check fail" << endl;
                        return false;
                    }
                }
            }
            
            // counter reset
            for(int c = 0;c < 9; c++) counter[c] = 0;
            
            // col check
            for(int col_ele = 0; col_ele < 9; col_ele++) {
                if(isdigit(board[col_ele][i])) {
                    int num = board[col_ele][i] - '1';
                    counter[num]++;
                    if(counter[num] == 2) {
                        cout << "col check fail" << endl;
                        return false;
                    }
                }
            }
            for(int c = 0;c < 9; c++) counter[c] = 0;
        }
        
        for(int c = 0;c < 9; c++) counter[c] = 0;
        
        // box check
        for(int i = 0;i < 3; i++) {
            for(int j = 0;j < 3; j++) {
                int row_start = 3*i;
                int col_start = 3*j;
                for(int c = 0;c < 9; c++) counter[c] = 0;
                
                for(int row = row_start;row < row_start+3; row++) {
                    for(int col = col_start;col < col_start+3; col++) {
                        if(isdigit(board[row][col])) {
                            int num = board[row][col] - '1';
                            counter[num]++;
                            if(counter[num] == 2) {
                                cout << "box check fail" << endl;
                                return false;
                            }
                        }
                    }
                }
            }
        }
        
        return true;
    }
};