class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        l1, l2 = s1.split(), s2.split()
        
        mp = {}
        
        for i in l1 + l2:
            mp[i] = mp.get(i, 0) + 1
            
        ans = [k for k,v in mp.items() if v == 1]
        
        return ans