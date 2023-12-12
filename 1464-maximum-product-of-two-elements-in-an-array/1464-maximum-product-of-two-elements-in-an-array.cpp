class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxIndex1, maxIndex2;
        if(nums[0] > nums[1]) {
            maxIndex1 = 0;
            maxIndex2 = 1;
        }
        else {
            maxIndex1 = 1;
            maxIndex2 = 0;
        }
        
        for(int i = 2;i < nums.size(); i++) {
            if(nums[i] >= nums[maxIndex1]) {
                maxIndex2 = maxIndex1;
                maxIndex1 = i;
            }
            else if(nums[i] >= nums[maxIndex2]) {
                maxIndex2 = i;
            }
        }
        
        return (nums[maxIndex1] - 1) * (nums[maxIndex2] - 1);
    }
};