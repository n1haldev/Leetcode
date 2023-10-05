class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        counter = dict()
        for i in nums:
            if(i not in counter):
                counter[i] = 1
            else:
                counter[i] += 1
                
        threshold = len(nums) / 3
        ans = []
        for i,j in counter.items():
            if j > threshold:
                ans.append(i)
                
        return ans