class Solution:
    def findMin(self, nums: List[int]) -> int:
        l, r = 0, len(nums) - 1
        mini = float('inf')
        
        while l <= r:
            mid = (l + r) // 2
            
            if nums[mid] > nums[r]:
                l = mid + 1
            else:
                mini = min([mini, nums[mid]])
                r = mid - 1
                
        return mini