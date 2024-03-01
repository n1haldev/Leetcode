class Solution {
public:
    void reverse(vector<int>& arr, int start, int end) {
        int half = (end - start) / 2;
        for(int i = 0;i < half; i++) {
            int temp = arr[start+i];
            arr[start+i] = arr[end-i-1];
            arr[end-i-1] = temp;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        
        reverse(nums, 0, n-k);
        reverse(nums, n-k, n);
        reverse(nums, 0, n);
    }
};