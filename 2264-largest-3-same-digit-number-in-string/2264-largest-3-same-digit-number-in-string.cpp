class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        int l = num.length();
        int max = 0;
        
        for(int i = 1;i < l-1; i++) {
            if(num[i-1] == num[i] && num[i] == num[i+1]) {
                string slice = num.substr(i-1, 3);
                int triplet = stoi(slice);
                if(triplet >= max) {
                    max = triplet;
                    ans = slice;
                }
            }
        }
        return ans;
    }
};