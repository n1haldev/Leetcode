class Solution {
public:
    int findComplement(int num) {
        int temp = num, count = 0;
        
        while(temp > 0) {
            count++;
            temp >>= 1;
        }
        
        int orrer = INT_MAX << count;
        int new_num = num | orrer;
        
        return ~new_num;
    }
};