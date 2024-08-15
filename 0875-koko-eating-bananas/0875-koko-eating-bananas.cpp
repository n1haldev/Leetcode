class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        int res = r;
        
        while(l <= r) {
            int k = (l+r)/2;
            
            long int time = 0;
            for(auto pile: piles) {
                time += (pile + k - 1)/k;
            }
            
            if(time <= h) {
                res = k;
                r = k-1;
            }
            else {
                l = k+1;
            }
        }
        
        return res;
    }
};