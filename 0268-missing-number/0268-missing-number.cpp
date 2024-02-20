class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        
        for(auto i : nums) {
            sum += i;
        }
        
        int tb_sum = (n * (n + 1)) / 2;
        return tb_sum - sum;
    }
};