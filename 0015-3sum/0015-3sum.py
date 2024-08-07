class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ans = []
        nums = sorted(nums)
        
        for i in range(len(nums)):
            if nums[i] > 0:
                break
                
            if i > 0 and nums[i-1] == nums[i]:
                continue
                
            l = i + 1
            r = len(nums) - 1
            
            while l < r:
                Sum = nums[i] + nums[l] + nums[r]
                
                if Sum == 0:
                    ans.append([nums[i], nums[l], nums[r]])
                    l += 1
                    r -= 1
                    while l < r and nums[l] == nums[l-1]:
                        l += 1
                elif Sum > 0:
                    r -= 1
                elif Sum < 0:
                    l += 1
        return ans;