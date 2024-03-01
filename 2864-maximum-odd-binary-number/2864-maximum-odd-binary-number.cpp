class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int len = s.length();
        string ans = "";
        
        int num_1 = 0;
        
        for(auto c: s) {
            if(c == '1') {
                num_1++;
            }
        }
        
        if(num_1 == 0) {
            return s;
        }
        
        while(len > 1) {
            if(num_1 > 1) {
                ans.append("1");
                num_1--;
            }           
            else {
                ans.append("0");
            }
            len--;
        }
        return ans.append("1");
    }
};