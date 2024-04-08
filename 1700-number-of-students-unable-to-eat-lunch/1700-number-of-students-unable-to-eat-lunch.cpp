class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int squares = 0;
        int circles = 0;
        
        for(auto it : students) {
            if(it == 1) {
                squares++;
            }
            else {
                circles++;
            }
        }
        
        for(auto it: sandwiches) {
            if(it == 0) {
                if(circles > 0)
                    circles--;
                else
                    break;
            }
            else {
                if(squares > 0)
                    squares--;
                else
                    break;
            }
        }
        
        return squares+circles;
    }
};