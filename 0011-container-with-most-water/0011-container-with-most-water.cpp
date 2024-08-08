class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0, maxArea = 0;
        int l = 0, r = height.size() - 1;
        
        while(l < r) {
            int mini = (height[l] >= height[r]) ? r : l;
            
            area = (r-l) * height[mini];
            if(area > maxArea) maxArea = area;
            
            if(mini == r) {
                r--;
            }
            else if(height[r] == height[l]) {
                l++;
                r--;
            }
            else {
                l++;
            }
        }
        
        return maxArea;
    }
};