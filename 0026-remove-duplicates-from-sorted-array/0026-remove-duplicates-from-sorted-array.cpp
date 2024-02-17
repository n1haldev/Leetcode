class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        
        for(int j = 1;j < n; j++) {
            if(nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        
        nums.erase(nums.begin()+i+1, nums.end());
        return i+1;
    }
};