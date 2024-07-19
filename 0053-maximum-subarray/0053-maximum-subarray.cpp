#include <algorithm>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int r = 1, sum = nums[0], maxSum = nums[0];
        while (r < nums.size()) {
            sum = max(nums[r], sum + nums[r]);
            if (sum > maxSum) {
                maxSum = sum;
            }
            r++;
        }
        
        return maxSum;
    }
};