class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        
        auto start = nums.begin() + n - k;
        auto end = nums.end();
        
        vector<int> slice(start, end);
        
        nums.erase(nums.begin() + n - k, nums.end());
        
        nums.insert(nums.begin(), slice.begin(), slice.end());
    }
};