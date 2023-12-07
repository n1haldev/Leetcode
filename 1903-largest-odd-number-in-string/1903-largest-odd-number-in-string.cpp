class Solution {
public:
    string largestOddNumber(string num) {
        int len = num.length();
        int temp, i;
        
        for(i = len-1;i >= 0;i--) {
            temp = (int)(num[i]);
            if(temp % 2 == 1) {
                break;
            }
        }
        
        if(i == -1) {
            return "";
        }
        
        return num.substr(0, i+1);
    }
};