class Solution {
public:
    bool isSorted(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0;i < n-1; i++) {
            if(arr[i] > arr[i+1])
                return false;
        }
        return true;
    }
    vector<int> rotate(vector<int>& nums, int bi) {
        vector<int> rotated;
        int obi = bi;
        while(bi < nums.size()) {
            rotated.push_back(nums[bi++]);
        }
        for(int i = 0;i < obi; i++) {
            rotated.push_back(nums[i]);
        }
        
        return rotated;
    }
    bool check(vector<int>& nums) {
        int break_ind = 0;
        int n = nums.size();
        
        if(n == 1 || isSorted(nums))
            return true;
        
        while(nums[break_ind] <= nums[break_ind+1]) {
            break_ind++;
        }
        break_ind++;
        if(break_ind == n)
            return true;
        
        vector<int> rotated = rotate(nums, break_ind);
        if(isSorted(rotated))
            return true;
        return false;
    }
};