class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        int carry = 0;
        
        while(i >= 0 && digits[i] == 9) {
            digits[i--] = 0;
            carry = 1;
        }
        
        if(i == -1 && carry == 1) {
            digits.push_back(0);
            digits[0] = 1;
        }
        else {
            digits[i] += 1;
        }
        
        return digits;
    }
};