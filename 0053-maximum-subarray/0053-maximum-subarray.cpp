class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int r = 0, sum = 0, max = nums[0];
        while(r < nums.size()) {
            sum += nums[r];
            r++;
            
            if(sum > max) {
                max = sum;
            }
            
            if(sum < 0) {
                sum = 0;
            }
        }
        
        return max;
    }
};